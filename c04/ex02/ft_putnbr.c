/*
    Autorisé : write()
    But : Écrire une fonction qui affiche un nombre passé en paramètre. La fonction devra
        être capable d’afficher la totalité des valeurs possibles dans une variable de type
        int.
    Prototype : void ft_putnbr(int nb);
*/
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void ft_putnbr(int nb)
{
    int pow = 1;
    int unit;
    char c_unit;
    // Handle neg
    char neg = '-';
    if(nb < 0)
    {
        if (nb == -2147483648)
        {
            write(1, "-2147483648", 11);
            return;
        }
        nb = -nb;
        write(1, &neg, 1);
    }

    // Getting the power of ten
    while(nb / pow >= 10)
    {
        pow *= 10;
    }
    while(nb)
    {
        // Getting the most significant unit
        unit = nb / pow;
        // Writing char (check if last digit has been downgraded due to min int)
        c_unit = unit + 48;
        write(1, &c_unit, 1);
        // Get the remainder
        nb %= pow;
        pow /= 10;
    }
}

int main()
{
    ft_putnbr(-789);
    printf("\n");

    int max = INT_MAX;
    printf("%d\n", max);
    ft_putnbr(INT_MIN);
    printf("\n");

    return 0;
}