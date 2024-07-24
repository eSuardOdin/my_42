/*
    Autorisé : Aucune
    But : Écrire une fonction qui renvoie 1 si la chaîne passée en paramètre ne contient que
          des caractères alphabétiques et renvoie 0 si la chaîne passée en paramètre contient
          d’autres types de caractères.
    Prototype : int ft_str_is_alpha(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void print_res(char *str, int isTrue)
{
    (isTrue == 1) ? printf("The string \"%s\" contains only alphabetic chars : True\n", str) : printf("The string \"%s\" contains only alphabetic chars : False\n", str);
}

int ft_str_is_alpha(char *str)
{
    while(*str != '\0')
    {
        if(((int)*str < 65 || (int)*str > 90) && ((int)*str < 97 && (int)*str < 122))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main()
{
    char *isOk = "ThisStringIsValid";
    char *isOk2 = "";
    char *isNotOk = "Thisstr1ngi5n0tv@lid.";

    print_res(isOk, ft_str_is_alpha(isOk));
    print_res(isNotOk, ft_str_is_alpha(isNotOk));
    print_res(isOk2, ft_str_is_alpha(isOk2));
    return 0;
}