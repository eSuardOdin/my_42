/*
    Autorisé : Aucune
    But : Reproduire à l’identique le fonctionnement de la fonction strncpy (man strncpy).
    Prototype : char *ft_strncpy(char *dest, char *src, unsigned int n);
*/
#include <stdio.h>
#include <unistd.h>

void ft_print_null_term_str(char *str, int len)
{
    for(int i = 0; i < len; i++)
    {
        if(str[i] == '\0')
        {
            printf("\\0");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *inc = dest;
    for(unsigned i = 0; i < n; i++)
    {
        if(*src != '\0')
        {
            *inc = *src;
            src++;
        }
        else
        {
            *inc = '\0';
        }
        inc++;
    }
    return dest;
}

int main()
{
    char dest[40];
    char *long_str = "This is a very long string, don't you think ? Lorem ipsum et tout quoi.";
    char *short_str = "Short";
    ft_strncpy(dest, long_str, 21);
    ft_print_null_term_str(dest, 21);
    ft_strncpy(dest, short_str, 21);
    ft_print_null_term_str(dest, 21);
    return 0;
}