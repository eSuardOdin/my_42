/*
    Autorisé : write()
    But : L’affichage de la zone mémoire est séparée en trois "colonnes" séparées par un
          espace :
            L’adresse en hexadécimal du premier caractère de la ligne suivi d’un ’ :’.
            Le contenu en hexadécimal avec un espace tous les deux caractères et doit etre
                complété avec des espaces si nécessaire (voir l’exemple en dessous).
            Le contenu en caractères imprimables.
        Si un caractère est non-imprimable il sera remplacé par un point.
        Chaque ligne doit gérer seize caractères.
        Si size est égale à 0, rien ne sera affiché.

    Prototype : void *ft_print_memory(void *addr, unsigned int size);
*/
#include <stdio.h>
#include <unistd.h>

char get_hex_char(int unit)
{
    char c_unit;
    if(unit > 9)
    {
        c_unit = (char) unit + 87; // 10 + 87 = 97 ('a')
    }
    else
    {
        c_unit = (char) unit + 48; // 0 + 48 = 48 ('0')
    }
    return c_unit;
}


// void print_hex_address(unsigned long dec_val)
void print_hex_address(void *p)
{
    unsigned long dec_val = (unsigned long) p; // Only useful if first signature

    // Getting the power of 16
    unsigned long pow = 1;
    int zero_padding = 15;
    char z = '0';
    char point = ':';
    char space = ' ';
    while(pow < dec_val)
    {
        pow *= 16;
        zero_padding--;
        if(pow > dec_val)
        {
            pow /= 16;
            zero_padding++;
            break;
        }
    }

    // Writting 0 in order to get 16 long addresses
    for(; zero_padding > 0; zero_padding--)
    {
        write(1, &z, 1);        
    }

    int unit;
    char c_unit;
    for(unsigned long i = pow; i >= 1; i /= 16)
    {
        unit = (int) (dec_val / i);
        c_unit = get_hex_char(unit);
        write(1, &c_unit, 1);

        dec_val = dec_val % i;
        if(i == 1)
        {
            write(1, &point, 1);
            write(1, &space, 1);
            return;
        }
    }
}



void print_byte(char *p)
{
    int val = (int) *p;
    int unit;
    char c_unit;
    for(int div = 16; div >= 1; div /= 16)
    {
        unit = (int) (val / div);
        c_unit = get_hex_char(unit);
        write(1, &c_unit, 1);

        val = val % div;
        if(div == 1)
        {
            return;
        }
    }
}

void print_line(void *p, unsigned int *remaining_size)
{
    printf("In print_line, size = %d\n", *remaining_size);
    char space = ' ';
    //char line[16];
    // Check remaining
    int bytes_to_print = *remaining_size < 16 ? *remaining_size : 16;

    // print address 
    print_hex_address(p);
    for(unsigned int i = 0; i < *remaining_size; i++)
    {
        printf("In for loop, i = %d | remaining size = %d\n", i, *remaining_size);

        // Write space when 2 bytes printed
        if(i && i % 2 == 0)
        {
            write(1, &space, 1);
        }
        // Print pointer value
        printf("%d - ", (int)*(char*)p);
        // increment pointer location
        p++;
    }
    *remaining_size -= bytes_to_print;
    // p += bytes_to_print;
}

/**
 * @brief Append the string with the values read in memory
 * 
 * @param str The string to append
 * @param byte_val The value read from memory
 * @param i String index
 */
void append_printable_string(char str[], int byte_val, int i)
{
    char c;
    if(byte_val < 32 || byte_val > 126)
    {
        c = '.';
    }
    else
    {
        c = (char) byte_val;
    }
    str[i] = c;
}



void *ft_print_memory(void *addr, unsigned int size)
{
    if(size == 0)
    {
        return addr;
    }
    print_line(addr, &size);
    return addr;
}



int main()
{
    char *test = "Hello World";
    // long long *b = &a;
    // int c = 'e';
    // int *d = &c;
    // unsigned int size = 12;
    ft_print_memory(test, 12);
    // ft_print_memory(b, 2);
    // printf("\n");
    // ft_print_memory(d, 2);
    // printf("\n");
    return 0;
}