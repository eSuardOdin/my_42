/**
 * Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * 
 * Écrire une fonction qui affiche le caractère passé en paramètre.
 * 
 * Prototype : void ft_putchar(char c)
 */
#include <unistd.h>

void ft_putchar(char c)
{
    int fildesc = 1;
    size_t n_bytes = 1;
    write(fildesc, &c, n_bytes);
}


int main()
{

    ft_putchar('a');
    ft_putchar('b');
    ft_putchar('c');
    return 0;
}