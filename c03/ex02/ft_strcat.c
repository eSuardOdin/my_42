/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strcat (man strcat).
    Prototype : char *ft_strcat(char *dest, char *src);
*/
#include <stdio.h>
#include <unistd.h>
char *ft_strcat(char *dest, char *src)
{
    char *res = dest;
    // Get to the dest end char
    while(*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest++ = *src++;
    }
    // Add null byte
    *dest = '\0';
    return res;
}


int main()
{
    char dest[27] = "Hello";
    char *src = " comment allez vous ?";
    char *res = ft_strcat(dest, src);
    
    while(*res != '\0')
    {
        write(1,res++,1);
    }
    printf("\n");


    return 0;
}