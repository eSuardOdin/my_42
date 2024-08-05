/*
    Autorisé : Aucune
    But : 
        • Écrire une fonction itérative qui renvoie un nombre. Ce nombre est le résultat de
    l’opération factorielle à partir du nombre passé en paramètre.
        • Si l’argument n’est pas valide, la fonction doit renvoyer 0.
        • Il ne faut pas gerer les "int overflow", le retour de la fonction sera indefini.
    Prototype : int ft_iterative_factorial(int nb);
*/
#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    if(nb < 0) return 0;
    if(nb > 1) return nb * ft_iterative_factorial(nb - 1);
    return nb;
}

int main()
{
    printf("%d! = %d\n", 5, ft_iterative_factorial(5));
    printf("%d! = %d\n", 9, ft_iterative_factorial(9));

    return 0;
}