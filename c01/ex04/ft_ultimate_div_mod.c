/**
 * Cette fonction divise les int pointés par a et b.
 * Le résultat de la division est stocké dans l’int pointé par a.
 * Le résultat du reste de la division est stocké dans l’int pointé par b.
 * 
 * Prototype : void ft_ultimate_div_mod(int *a, int *b);
 */

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
    int div = *a / *b;
    int mod = *a % *b;
    *a = div;
    *b = mod;
}

int main()
{
    int a = 1445536;
    int b = 13;
    printf("%d / %d\n",a,b);
    ft_ultimate_div_mod(&a, &b);
    printf("Div: %d\nMod: %d\n\n",a,b);
    
    return 0;
}
