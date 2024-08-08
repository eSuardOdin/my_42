/*
    Autorisé : Aucune
    But : Écrire une fonction qui renvoie le nombre premier immédiatement supérieur ou
égal au nombre passé en paramètre.
    Prototype : int ft_find_next_prime(int nb);
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
        odd_n++;
        odd_sum += (odd_n * 2) -1;
    }
    return odd_sum == nb ? odd_n : 0;
}


int ft_is_prime(int nb)
{
    if(nb <= 1) return 0;
    int limit = ft_sqrt(nb) != 0 ? ft_sqrt(nb) : nb - 1;
    int div = 2;

    while(div < limit)
    {
        if(nb % div == 0)
        {
            printf("Divisible par %d\n", div);
            return 0;
        }
        div++;
    }

    return 1;
}


int ft_find_next_prime(int nb)
{
    printf("Testing %d\n", nb);
    return ft_is_prime(nb) ? nb : ft_find_next_prime(nb + 1);
}

int main()
{

    int test_0 = 7043;
    int test_1 = 7044;

    printf("%d is prime\n", ft_find_next_prime(test_0));
    printf("%d is prime\n", ft_find_next_prime(test_1));
    return 0;
}