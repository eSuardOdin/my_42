/*
    Autorisé :
    But : Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient
        que des caractères alphabétiques majuscules et renvoie 0 si la chaîne passée en
        paramètre contient d’autres types de caractères.
    Prototype : int ft_str_is_uppercase(char *str);
*/
#include <stdio.h>
#include <unistd.h>
void print_res(char *str, int isTrue)
{
    (isTrue == 1) ? printf("The string \"%s\" contains only upper chars : True\n", str) : printf("The string \"%s\" contains only lower chars : False\n", str);
}

int ft_str_is_uppercase(char *str)
{
    while(*str != '\0')
    {
        if((int)*str < 65 || (int)*str > 90)
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main()
{
    char *isOk = "THISISOK";
    char *isNotOk = "THIs iS noT OkAy";
    print_res(isOk, ft_str_is_uppercase(isOk));
    print_res(isNotOk, ft_str_is_uppercase(isNotOk));
    return 0;
}