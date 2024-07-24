/**
 * Cette fonction divise les deux paramètres a et b et stocke le resultat dans l’int
 * pointé par div.
 * Elle stocke également le reste de la division de a et b dans l’int pointé par mod.
 * 
 * Prototype : void ft_div_mod(int a, int b, int *div, int *mod);
 */

#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int div;
    int mod;
    int a = 14536;
    int b = 439;
    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d\nDiv: %d\nMod: %d\n", a, b, div, mod);
    a = 8493;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d\nDiv: %d\nMod: %d\n", a, b, div, mod);
    a = 12;
    b = 5;
    ft_div_mod(a, b, &div, &mod);
    printf("%d / %d\nDiv: %d\nMod: %d\n", a, b, div, mod);

    return 0;
}
