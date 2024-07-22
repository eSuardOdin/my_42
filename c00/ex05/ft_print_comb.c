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

    // for (; i < j; i++) {
    //     printf("Entering 1st loop, i = %d\n", i);
    //     for (; j < k; j++) {
    //         printf("Entering 2nd loop, j = %d\n", j);
    //         for (; k < 10; k++)
    //         {
    //             printf("Entering 3rd loop, k = %d\n", k);
    //             char a = i + 48; // First ASCII nb
    //             char b = j + 48; // First ASCII nb
    //             char c = k + 48; // First ASCII nb
    //             char z = '\n';
    //             write(1, &a, 1);
    //             write(1, &b, 1);
    //             write(1, &c, 1);
    //             write(1, &z, 1);
    //             k = k == 10 ? j + 1 : k;
    //         }
    //         printf("Exiting 2nd loop, j = %d vs k = %d\n", j, k);
    //     }
    //     printf("Exiting 1st loop, i = %d vs j = %d\n", i, j);
    // }

    while(i <= j)
    {
        while(j <= k)
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
            j++;
        }
        i++;
        j = i + 1;
        k = j + 1;
    }
}


int main()
{

    ft_print_comb();
    return 0;
}