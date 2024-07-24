/**
 *  Autorisé : write()
 * 
 * ----------------------------------------------
 * Écrire une fonction qui affiche une chaine de caractères à l’écran.
 * 
 * Prototype : void ft_putstr(char *str);
 */

#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
    char z = '\n';
    write(1, &z, 1);
}


int main()
{
    char *hello = "Hello, world";
    char *empty = "";
    char *onechar = "A";

    ft_putstr(hello);
    ft_putstr(empty);
    ft_putstr(onechar);


    return 0;
}