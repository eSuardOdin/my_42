/*
    Autorisé : Aucune
    But :
        • Écrire une fonction qui renvoie la racine carrée entière d’un nombre si elle existe,
    0 si la racine carrée n’est pas entière.
    Prototype : int ft_sqrt(int nb);
*/
#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    // Odd numbers sum method
    int odd_n = 1;
    int odd_sum = 1;
    while(odd_sum < nb)
    {
        if(odd_n == 1)
        {
            printf("%d\n", odd_sum);
        }
        printf("+ %d\n", (odd_n * 2) - 1);
        odd_n++;

        odd_sum += (odd_n * 2) -1;
        // printf("odd_n : %d\nodd_sum : %d\n", odd_n, odd_sum);
    }
    printf("\n");

    return odd_sum == nb ? odd_n : 0;
}


int main()
{
    printf("Carré de %d = %d\n", 49, ft_sqrt(49));
    printf("Carré de %d = %d\n", 100, ft_sqrt(100));
    return 0;
}