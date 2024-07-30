/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strcmp (man strcmp).

    Prototype : int ft_strcmp(char *s1, char *s2);
*/
#include <stdio.h>
#include <unistd.h>



int ft_strcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
        {
            return (int)*s1 - (int)*s2;
        }
        s1++;
        s2++;
    }
    // If end of the two strings
    if(*s1 == *s2)
    {
        return 0;
    }
    // If s1 shorter, return negative, else return positive.
    return (*s1 == '\0') ? -1 : 1;
}
