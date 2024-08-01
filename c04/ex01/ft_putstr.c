/*
    Autorisé : write()
    But : Écrire une fonction qui affiche un à un les caractères d’une chaîne à l’écran.
        L’adresse du premier caractère de la chaîne est contenue dans le pointeur passé en
        paramètre à la fonction.
    Prototype : void ft_putstr(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*(str) != '\0')
    {
        write(1, str++, 1);
    }
}

int main()
{
    char *again = "Hello, again\n";
    char last[20] = "Lastly, hello !\n";
    ft_putstr("Hello, world");
    printf("\n");
    ft_putstr(again);
    ft_putstr(last);

    return 0;
}