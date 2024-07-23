/**
 *  Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * Écrire une fonction qui affiche, dans l’ordre croissant, toutes les différentes combinaisons
 * de trois chiffres différents dans l’ordre croissant
 * 
 * Prototype : void ft_print_comb(void);
 */

#include <unistd.h>
#include <stdio.h>
void ft_print_comb(void)
{
    int i = 0;
    int j = i + 1;
    int k = j + 1;

    for(; i < j; i++)
    {
        for(; j < k; j++)
        {
            for (; k < 10; k++)
            {
                char a = i + 48; // First ASCII nb
                char b = j + 48; // First ASCII nb
                char c = k + 48; // First ASCII nb
                char z = '\n';
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                write(1, &z, 1);
            }
            if(k == 10 && j != (k-1))
            {
                k = j + 2;
            }
        }
        if(k == 10 && j == 10)
        {
            j = i + 2;
            k = j + 1;
        }
    }
}


int main()
{

    ft_print_comb();
    return 0;
}