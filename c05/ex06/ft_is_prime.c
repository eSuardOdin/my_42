/*
    Autorisé : Aucune
    But : Écrire une fonction qui renvoie 1 si le nombre est premier et 0 si le nombre ne l’est pas.
    Prototype : int ft_is_prime(int nb);
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

int main()
{

    int prime = 7919;
    int n_prime = 1563;

    if(ft_is_prime(prime))
    {
        printf("%d is prime\n", prime);
    }
    else
    {
        printf("%d is not prime\n", prime);
    }


    if(ft_is_prime(n_prime))
    {
        printf("%d is prime\n", n_prime);
    }
    else
    {
        printf("%d is not prime\n", n_prime);
    }
    return 0;
}