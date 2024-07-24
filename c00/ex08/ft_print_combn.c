/**
 *  Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * Écrire une fonction qui affiche toutes les différentes combinaisons de n chiffres dans
 * l’ordre croissant.
 * 
 * Prototype : void ft_print_combn(int n);
 */

#include <unistd.h>
char print_digit(int n)
{
    return n + 48;
}


void ft_print_combn(int n)
{
    
}


int main()
{

    ft_print_combn(0);
    return 0;
}