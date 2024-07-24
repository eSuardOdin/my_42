/**
 * Écrire une fonction qui prend un pointeur sur pointeur sur pointeur sur pointeur
 * sur pointeur sur pointeur sur pointeur sur pointeur sur pointeur sur int en
 * paramètre et donne à l’int la valeur de 42.
 * 
 * Prototype : void ft_ultimate_ft(int *********nbr);
 */

#include <stdio.h>
void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int test = 0;
    int *p0 = &test;
    int **p1 = &p0;
    int ***p2 = &p1;
    int ****p3 = &p2;
    int *****p4 = &p3;
    int ******p5 = &p4;
    int *******p6 = &p5;
    int ********p7 = &p6;
    int *********p8 = &p7;
    printf("Before : %d\n", test);
    ft_ultimate_ft(p8);
    printf("After : %d\n", test);

    return 0;
}
