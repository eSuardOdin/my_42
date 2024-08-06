/*
    Autorisé :
    But :
        • Écrire une fonction ft_fibonacci qui renvoie le n-ième élément de la suite de
    Fibonacci, le premier élément étant à l’index 0. Nous considererons que la suite de
    Fibonacci commence par 0, 1, 1, 2.
        • Les overflows ne devront pas être gerés.
        • Si index est inférieur à 0, la fonction renverra -1.
    Prototype : int ft_fibonacci(int index);
*/
#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
    if(index == 0) return 0;
    if(index < 0) return -1;
    if(index > 2)
    {
        return ft_fibonacci(index-1) + ft_fibonacci(index-2);
    }
    return 1;
}

int main()
{

    for(int i = 0; i < 25; i++)
    {
        printf("%d\n", ft_fibonacci(i));
    }
    return 0;
}