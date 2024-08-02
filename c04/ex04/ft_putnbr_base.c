/*
    Autorisé : write()
    But : 
    • Écrire une fonction qui affiche un nombre dans le terminal dans une base donnée.
    • Ce nombre est fourni sous la forme d’un int et la base sous la forme d’une chaîne
    de caractères.
    • La base contient tous les symboles utilisables pour afficher le nombre :
        ◦ 0123456789 est la base couramment utilisée pour représenter nos nombres
    décimaux ;
        ◦ 01 est une base binaire ;
        ◦ 0123456789ABCDEF est une base hexadecimale ;
        ◦ poneyvif est une base octale.
    • La fonction doit gérer les nombres négatifs.
    • Si un paramètre contient une erreur la fonction n’affiche rien. Une erreur peut
    être :
        ◦ base est vide ou est de taille 1 ;
        ◦ base contient deux fois le même caractère ;
        ◦ base contient les caractères + ou -.
    Prototype : void ft_putnbr_base(int nbr, char *base);
*/
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int res = 0;
    while(*(str++) != '\0')
    {
        res++;
    }
    return res;
}


int is_char_repeated(char *str)
{
    printf("testing string %s\n", str);
    int len = ft_strlen(str);
    for(int i = 0; i < len-1; i++)
    {
        for(int y = i + 1; y < len; y++)
        {
            printf("testing '%c' vs '%c'\n", str[i], str[y]);
            if(str[i] == str[y])
            {
                printf("Same char !\n");
                return 1;
            }
        }
    }
    return 0;
}


// void ft_putnbr_base(int nbr, char *base)
// {
//     // Get base and exit if not valid
//     int base = ft_strlen(base);

// }


int main()
{
    char *ok = "abcdef";
    int ok_i = is_char_repeated(ok);
    if(ok_i)
    {
        printf("String not ok\n");
    }
    else
    {
        printf("Ok\n");
    }

    char *nok = "ab1cdefedf1";
    int nok_i = is_char_repeated(nok);
    if(nok_i)
    {
        printf("String not ok\n");
    }
    else
    {
        printf("Ok\n");
    }

    return 0;
}