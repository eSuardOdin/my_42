/*
    Autorisé : Aucune
    But : Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que
        des chiffres et renvoie 0 si la chaîne passée en paramètre contient d’autres types
        de caractères.
    Prototype : int ft_str_is_numeric(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void print_res(char *str, int isTrue)
{
    (isTrue == 1) ? printf("The string \"%s\" contains only numeric chars : True\n", str) : printf("The string \"%s\" contains only numeric chars : False\n", str);
}

int ft_str_is_numeric(char *str)
{
    while(*str != '\0')
    {
        if((int)*str < 48 || (int)*str > 57)
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main()
{
    char *isOk = "01234567890023999430005395300000000349349";
    char *isOk2 = "";
    char *isNotOk = "Thisstr1ngi5n0tv@lid.";

    print_res(isOk, ft_str_is_numeric(isOk));
    print_res(isNotOk, ft_str_is_numeric(isNotOk));
    print_res(isOk2, ft_str_is_numeric(isOk2));
    return 0;
}