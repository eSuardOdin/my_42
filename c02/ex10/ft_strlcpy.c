/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strlcpy (man strlcpy).
    Prototype : unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
*/
#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int len = 0;
    if(size > 0)
    {
        dest[size - 1] = '\0';
    }

    while(len != (size - 1))
    {
        dest[len] = *src++;
        len++;
    }

    // Count chars left
    while(*src != '\0')
    {
        len++;
        src++;
    }
    return len+1;
}

int main() {
    char dest[10];
    char *source = "Hello, World!";
    unsigned int length;

    length = ft_strlcpy(dest, source, (unsigned int)sizeof(dest));

    printf("Destination: %s\n", dest);
    printf("Source length: %d\n", length);

    return 0;
}
