/*
    Autorisé : Aucune
    But : Écrire une fonction qui met en minuscule chaque lettre.
    Prototype : char *ft_strlowcase(char *str);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strlowcase(char *str)
{
    while(*str != '\0')
    {
        if((int)*str >= 65 && (int)*str <= 90)
        {
            *str = (int)*str + 32;
        }
        str++;
    }
    return str;
}

int main()
{
    char str[25] = "Ceci est un Test !";
    printf("%s\n", str);
    ft_strlowcase(str);
    printf("%s\n", str);
    return 0;
}