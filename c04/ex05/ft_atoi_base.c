/*
    Autorisé : Aucune
    But : • Ecrire une fonction qui convertit le début de la chaîne pointée par str en entier de
type int.
        • str est dans une base specifique passée en second argument de la fonction.
        • A part le système de base, cette fonction doit reproduire le comportement de
        ft_atoi.
        • Si un paramètre contient une erreur la fonction renvoie 0. Une erreur peut être :
            ◦ la base est vide ou est de taille 1 ;
            ◦ la base contient deux fois le même caractère ;
            ◦ la base contient les caractères + ou - ou des whitespaces ;
    Prototype : ft_atoi_base(char *str, char *base);
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

/**
 * @brief Tests if a symbol is contained in a base (base must have been tested as valid before)
 * 
 * @param symbol The symbole to test
 * @param base The base to test against
 * @return int 0 - 1
 */
int is_symbol_in_base(char symbol, char *base)
{
    char *base_copy = base;
    while(*base_copy != '\0')
    {
        if(*base_copy == symbol) return 1;
        base_copy++;
    }
    return 0;
}

ft_atoi_base(char *str, char *base)
{

    // Result to return
    int res = 0;
    // Number of '-' signs
    int neg_n = 0;
    // Index of the first digit
    char *back_ptr = NULL;
    int n_index = 0;

    // Get base length and exit if not valid
    int base_len = is_base_valid(base);
    if(!base_len)
    {
        return;
    }
    // Power of base
    int pow = 0;

    // Checking for whitespace
    while(
        *str == ' '     ||
        *str == '\f'    ||
        *str == '\n'    ||
        *str == '\r'    ||
        *str == '\t'    ||
        *str == '\v'
        )
    {
        str++;
        n_index++;
    }

    // Checking for + or - signs
    while(
        *str == '-'     ||
        *str == '+'
        )
    {
        neg_n = *str == '-' ? neg_n + 1 : neg_n;
        str++;
        n_index++;
    }

    
    // Checking for digits
    while(is_symbol_in_base(*str, base))
    {
        if(back_ptr == NULL)
        {
            back_ptr = str;
        }
        str++;
        pow = (pow == 0) ? 1 : pow * base_len;
    }

    // Calculate number
    // printf("Index: %d\nChar: %d\n", n_index, str[n_index]);
    while(is_symbol_in_base(*back_ptr, base))
    {
        // printf("Index : %d\n", n_index);
        res += ((int)(*(back_ptr++) - '0')) * pow; // Ici il faut que j'ai l'index du symbol dans la base
                                                    // is_symbol in char devra renvoyer -1 si erreur et renvoyer l'index dans la base sinon
        if(pow == 1)
        {
            break;
        }
        pow /= base_len;
    }
    return (neg_n % 2 == 0) ? res : -res;
}

int main()
{
    char *str = "   \n\r\n  \t \v++-6-+-4567";   
    // printf("%d white space\n", ft_atoi(str));
    printf("%d\n", ft_atoi(str));
    return 0;
}