/*
    Autorisé :
    But : Écrire une fonction qui affiche une chaîne de caractères à l’écran. Si cette chaîne
        contient des caractères non-imprimables, ils devront être affichés sous forme hexadécimale
        (en minuscules) en les précédant d’un "backslash".
    Prototype : void ft_putstr_non_printable(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void print_hex(int n)
{
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

// void ft_putstr_non_printable(char *str)
// {

// }

int main()
{
    print_hex(302);
    printf("\n");
    print_hex(38975);
    printf("\n");
    return 0;
}