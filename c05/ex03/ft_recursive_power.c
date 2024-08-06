/*
    Autorisé : Aucune
    But :
        • Écrire une fonction récursive qui renvoie une puissance d’un nombre. Une puissance
    inferieur à 0 renverra 0.
        • Comme il n’y a pas de concensus sur 0 puissance 0, nous considererons que le
    resultat sera 1.
        • Il ne faut pas gerer les "int overflow", le retour de la fonction sera indefini.
    Prototype : int ft_recursive_power(int nb, int power);
*/
#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    if(power < 0)   return 0;
    if(power == 0)  return 1;

    return power == 1 ? nb : nb * ft_recursive_power(nb, power - 1);
}

int main()
{
    printf("%d power %d = %d\n", 2, 4, ft_recursive_power(2, 4));
    printf("%d power %d = %d\n", 2, -1, ft_recursive_power(2, -1));
    printf("%d power %d = %d\n", 2, 0, ft_recursive_power(2, 0));


    return 0;
}