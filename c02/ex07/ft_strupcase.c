/*
    Autorisé : Aucune
    But : Écrire une fonction qui met en majuscule chaque lettre.
    Prototype : char *ft_strupcase(char *str);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{
    while(*str != '\0')
    {
        if((int)*str >= 97 && (int)*str <= 122)
        {
            *str = (int)*str - 32;
        }
        str++;
    }
    return str;
}

int main()
{
    char str[25] = "Ceci est un Test !";
    printf("%s\n", str);
    ft_strupcase(str);
    printf("%s\n", str);
    return 0;
}