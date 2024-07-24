
/**
 * Écrire une fonction qui échange le contenu de deux entiers dont les adresses sont
 * données en paramètres.
 * 
 * Prototype : void ft_swap(int *a, int *b);
 */

#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 12;
    int b = 234;
    printf("Before swap : A = %d | B = %d\n", a, b);
    ft_swap(&a, &b);
    printf("After swap : A = %d | B = %d\n", a, b);
    

    return 0;
}