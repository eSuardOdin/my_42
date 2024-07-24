/*
    Autorisé :
    But : Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que
        des caractères affichables et renvoie 0 si la chaîne passée en paramètre contient
        d’autres types de caractères.
    Prototype : int ft_str_is_lowercase(char *str);
*/
#include <stdio.h>
#include <unistd.h>
void print_res(char *str, int isTrue)
{
    (isTrue == 1) ? printf("The string \"%s\" contains only lower chars : True\n", str) : printf("The string \"%s\" contains only lower chars : False\n", str);
}

int ft_str_is_lowercase(char *str)
{
    while(*str != '\0')
    {
        if((int)*str < 97 || (int)*str > 122)
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main()
{
    char *isOk = "thisisok";
    char *isNotOk = "THIs iS noT OkAy";
    print_res(isOk, ft_str_is_lowercase(isOk));
    print_res(isNotOk, ft_str_is_lowercase(isNotOk));
    return 0;
}