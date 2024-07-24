/**
 * Écrire une fonction qui prend un pointeur sur int en paramètre et donne à l’int la valeur de 42.
 * Prototype : void ft_ft(int *nbr);
 */

#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int test = 0;
    printf("Before : %d\n", test);
    ft_ft(&test);
    printf("After : %d\n", test);

    return 0;
}
