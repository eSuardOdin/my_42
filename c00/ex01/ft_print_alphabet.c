/**
 * Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * 
 * Écrire une fonction qui affiche l’alphabet en minuscule sur une seule ligne, dans
 * l’ordre croissant, à partir de la lettre ’a’.
 * 
 * Prototype : void ft_print_alphabet(void)
 */
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    const int ASCII_BEG = 97;
    const int ASCII_END = 122;
    for(int i = ASCII_BEG; i <= ASCII_END; i++)
    {
        ft_putchar((char)i);
    }
}


int main()
{

    ft_print_alphabet();
    return 0;
}