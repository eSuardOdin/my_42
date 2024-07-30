/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strcat (man strcat).
    Prototype : char *ft_strcat(char *dest, char *src);
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
char *ft_strcat(char *dest, char *src)
{
    // 
}


int main()
{
    printf("tf ? \n");
    char dest[10] = "Hello";
    char *src = "way too long";
    strcat(dest, src);

    printf("Oh ? : %s\n", dest);
    return 0;
}