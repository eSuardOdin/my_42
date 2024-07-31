/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strlcat (man strlcat).
    Prototype : unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int len = 0;
    // Check if byte left
    while(*dest != '\0')
    {
        dest++;
        len++;
        size--;
    }

    while(size > 1 && *src != '\0')
    {
        *dest++ = *src++;
        len++;
        size--;
    }
    *(++dest) = '\0';
    return ++len;
}


int main()
{
    char dest[17] = "Hello";
    char *src = " World !!";
    char *tst = dest;
    // strlcat(dest, src);
    ft_strlcat(dest, src, sizeof(dest));
    // printf("%s\n", dest);
    while (*tst) {
        
        putchar(*tst);
        
        tst++;
    }

    if (*tst == '\0') {
        printf("<null>\n");
    }
    return 0;
}