/*
    Autorisé : Aucune
    But : Reproduire à l’identique le fonctionnement de la fonction strcpy (man strcpy).
    Prototype : char *ft_strcpy(char *dest, char *src);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    char *inc = dest;
    while(*src != '\0')
    {
        *inc = *src;
        src++;
        inc++;
    }
    *inc = '\0';
    return dest;
}

int main()
{
    char dest[20];
    char *hello = "Hello, ";
    ft_strcpy(dest, hello);
    printf("%s", dest);
    char *world = "World!";
    char dest2[20];
    ft_strcpy(dest2, world);
    printf("%s\n", dest2);
    return 0;
}