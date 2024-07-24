/**
 *  Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * Écrire une fonction qui affiche un nombre passé en paramètre. La fonction devra
 * être capable d’afficher la totalité des valeurs possibles dans une variable de type
 * int
 * 
 * Prototype : void ft_putnbr(int nb);
 */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_digit_to_char(int n)
{
    return n + 48;
}

void ft_putnbr(int nb)
{

    int unit;
    // Check if a pow of 10 as been over 0
    int isFirstUnit = 0;
    if(nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    // On va dec de 100 000 000 à 10
    for(int pow = 1000000000; pow >= 1; pow/=10)
    {
        if(nb >= pow)
        {
            // Get the unit
            unit = nb / pow;
            if(unit != 0)
            {
                if(!isFirstUnit) {
                    isFirstUnit = 1;
                }
                ft_putchar(ft_digit_to_char(unit));
            }
            nb = nb % pow;
        }
        // If zero
        else if(isFirstUnit)
        {
            ft_putchar(ft_digit_to_char(0));
        }
    }
    if(!isFirstUnit) {
        ft_putchar(ft_digit_to_char(0));
    }
    ft_putchar('\n');
}


int main()
{
    ft_putnbr(0);
    ft_putnbr(1);
    ft_putnbr(-1);
    ft_putnbr(INT_MIN + 1);
    ft_putnbr(INT_MAX);

    return 0;
}