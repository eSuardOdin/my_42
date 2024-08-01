/*
    Autorisé :
    But : Écrire une fonction qui compte le nombre de caractères dans une chaîne de caractères et qui retourne le nombre trouvé.
    Prototype : int ft_strlen(char *str);
*/
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int res = 0;
    while(*(str++) != '\0')
    {
        res++;
    }
    return res;
}

int main()
{
    char *hello = "Hello world!";
    printf("String \"%s\" contains %d chars\n", hello, ft_strlen(hello));
    return 0;
}