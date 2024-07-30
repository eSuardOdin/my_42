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

int main()
{

    char *str_a = "ab1";
    // char *str_b = "abcd";
    char *str_b = "abc";
    int cp = ft_strcmp(str_a, str_b); 
    if(!cp)
    {
        printf("Strings \"%s\" and \"%s\" are equal -> %d\n", str_a, str_b, cp);
    }
    else if(cp > 0)
    {
        printf("Strings \"%s\" and \"%s\" are not equal -> %d = \"%s\" bigger\n", str_a, str_b, cp, str_a);
    }
    else
    {
        printf("Strings \"%s\" and \"%s\" are not equal -> %d = \"%s\" bigger\n", str_a, str_b, cp, str_b);
    }
    return 0;
}
