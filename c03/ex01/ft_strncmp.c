/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strncmp (man strncmp).

    Prototype : int ft_strncmp(char *s1, char *s2, unsigned int n);
*/
#include <stdio.h>
#include <unistd.h>



int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while(*s1 != '\0' && *s2 != '\0' && i < n)
    {
        printf("Testing %c vs %c -> i : %d/%d\n", *s1, *s2, i, n-1);
        if(*s1 != *s2)
        {
            return (int)*s1 - (int)*s2;
        }
        s1++;
        s2++;
        if(i < n)
        {
            i++;
        }
    }
    // If end of the two strings
    if(*s1 == *s2 || i == n)
    {
        return 0;
    }
    // If s1 shorter, return negative, else return positive.
    return (*s1 == '\0') ? -1 : 1;
}

int main()
{

    char *str_a = "abcde123";
    char *str_b = "abcdefgh";
    int cp = ft_strncmp(str_a, str_b, 27); 
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
