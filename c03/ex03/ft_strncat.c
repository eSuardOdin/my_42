/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strncat (man strncat).
    Prototype : char *ft_strncat(char *dest, char *src, unsigned int nb);
*/
#include <stdio.h>
#include <unistd.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *res = dest;
    // Get to the dest end char
    while(*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0' && nb)
    {
        *dest++ = *src++;
        nb--;
    }
    // Add null byte
    *dest = '\0';
    return res;
}


int main()
{
    char dest[4] = "AB";
    char *src = "C";
    char *res = ft_strncat(dest, src, 1);
    
    while(*res != '\0')
    {
        write(1,res++,1);
    }
    printf("\n");


    return 0;
}