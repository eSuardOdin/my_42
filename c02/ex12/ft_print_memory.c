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


// void print_hex_address(unsigned long dec_val)
void print_hex_address(void *p)
{
    unsigned long dec_val = (unsigned long) p; // Only useful if first signature

    // Getting the power of 16
    unsigned long pow = 1;
    int zero_padding = 15;
    char z = '0';
    char point = ':';
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
        if(unit > 9)
        {
            c_unit = (char) unit + 87; // 10 + 87 = 97 ('a')
        }
        else
        {
            c_unit = (char) unit + 48; // 0 + 48 = 48 ('0')
        }
        write(1, &c_unit, 1);

        dec_val = dec_val % i;
        if(i == 1)
        {
            write(1, &point, 1);
            return;
        }
    }
}


void *ft_print_memory(void *addr, unsigned int size)
{
    if(size == 0)
    {
        return;
    }
}



int main()
{
    long long a = 2;
    long long *b = &a;
    int c = 'e';
    int *d = &c;
    
    print_hex_address((unsigned long) b);
    printf("\n");
    print_hex_address((unsigned long) d);
    // printf("%p", p);
    printf("\n");
    return 0;
}