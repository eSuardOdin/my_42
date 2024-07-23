/**
 *  Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * Écrire une fonction qui affiche toutes les différentes combinaisons de deux nombres
 * entre 0 et 99, dans l’ordre croissant.
 * 
 * Prototype : void ft_print_comb2(void);
 */

#include <unistd.h>
char print_digit(int n)
{
    return n + 48;
}
void ft_print_comb2(void)
{
    // Print until 99
    int left = 0;
    int right = 1;
    for(; left < 100; left++)
    {
        for(; right < 100; right++)
        {
            char lu = print_digit(left % 10);
            char ld = print_digit(left / 10);
            char ru = print_digit(right % 10);
            char rd = print_digit(right / 10);
            char s = ' ';
            char z = '\n';
            write(1, &ld, 1);
            write(1, &lu, 1);
            write(1, &s, 1);
            write(1, &rd, 1);
            write(1, &ru, 1);
            write(1, &z, 1);
        }
        right = left + 2;
    }
}


int main()
{

    ft_print_comb2();
    return 0;
}