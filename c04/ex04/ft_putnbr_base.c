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


/**
 * @brief Checks if a base is valid
 * 
 * @param str The base to test
 * @return int The lenght of the base or zero if not valid
 */
int is_base_valid(char *str)
{
    // Check if + or - sign already tested
    int isCharTested = 0;
    int len = ft_strlen(str);

    if(len <= 1)
    {
        return 0;
    }

    for(int i = 0; i < len-1; i++)
    {
        for(int y = i + 1; y < len; y++)
        {
            if(!isCharTested && (str[i] == '+' || str[i] == '-' || str[y] == '+' || str[y] == '-'))
            {
                return 0;
            }
            if(str[i] == str[y])
            {
                return 0;
            }
        }
        // Don't test chars validity more than once
        if(!isCharTested)
        {
            isCharTested = 1;
        }
    }
    return len;
}


void ft_putnbr_base(int nbr, char *base)
{
    char ret = '\n';
    char minus = '-';

    // Handle neg
    if(nbr < 0)
    {
        nbr = -nbr;
        write(1, &minus, 1);
    }
    // Get base and exit if not valid
    int base_len = is_base_valid(base);
    if(!base_len) return;


    // // ---- Debug -----
    // printf("Getting %d to base %d\n", nbr, base_len);
    // // -- End Debug ---

    // Get maximum power dividing the number
    int pow = 1;
    while(nbr / pow > base_len)
    {
        pow *= base_len;
    }

    // // ---- Debug -----
    // printf("Highest power of %d is %d\n", base_len, pow);
    // // -- End Debug ---


    // Get number to base
    int unit;
    // char unit_c;
    while(nbr || pow > 1)
    {
        unit = nbr / pow;
        write(1, &base[unit], 1);
        nbr = nbr % pow;
        pow /= base_len;
    }

    write(1, &ret, 1);
}


int main()
{
    char *bin = "01";
    ft_putnbr_base(24, bin);
    char *oct = "azertyui";
    ft_putnbr_base(-767, oct);
    return 0;
}