/**
 *  Autorisé : Aucune fonction
 * 
 * ----------------------------------------------
 * Écrire une fonction qui compte le nombre de caractères dans une chaîne de caractères
 * et qui retourne le nombre trouvé.
 * 
 * Prototype : int ft_strlen(char *str);
 */

#include <stdio.h>

int ft_strlen(char *str)
{
    int res = 0;
    while(*str != '\0')
    {
        res++;
        str++;
    }
    return res;
}

int main()
{
    char *hello = "Hello, World!";
    char *one = "A";
    char *empty = "";

    printf("String \"%s\" is %d chars long\n", hello, ft_strlen(hello));
    printf("String \"%s\" is %d chars long\n", one, ft_strlen(one));
    printf("String \"%s\" is %d chars long\n", empty, ft_strlen(empty));

}