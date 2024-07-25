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

void print_hex_address(void *p)
{
    printf("%p", p);
    // Getting the power of 16
    int pow = 1;
    while(pow < n)
    {
        pow *= 16;
        if(pow > n)
        {
            pow /= 16;
            break;
        }
    }
    int unit;
    char c_unit;
    char back = '\\';
    write(1, &back, 1);
    for(int i = pow; i >= 1; i /= 16)
    {
        unit = n / i;
        if(unit > 9)
        {
            c_unit = (char) unit + 55; // 10 + 55 = 65 ('A')
        }
        else
        {
            c_unit = (char) unit + 48; // 0 + 48 = 48 ('0')
        }
        write(1, &c_unit, 1);

        n = n % i;
        if(i == 1)
        {
            return;
        }
    }
}
int main()
{
    int a = 2;
    int *b = &a;
    char c = 'e';
    char *d = &c;
    print_hex_address(b);
    printf("\n");
    print_hex_address(d);
    printf("\n");
    return 0;
}