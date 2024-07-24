/**
 *  Autorisé : Aucune fonction
 * 
 * ----------------------------------------------
 * Écrire une fonction qui inverse l’ordre des élements d’un tableau d’entiers.
 * Les paramètres sont un pointeur sur entier et le nombre d’entiers dans le tableau.
 * 
 * Prototype : void ft_rev_int_tab(int *tab, int size);
 */

#include <stdio.h>

void print_int_tab(int *tab, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}

void ft_rev_int_tab(int *tab, int size)
{
    // print_int_tab(tab, size);
    int mid = size / 2;
    // printf("mid : %d\n", mid);
    int temp;
    for(int i = 0; i < mid; i++)
    {
        size--;
        temp = tab[i];
        tab[i] = tab[size];
        tab[size] = temp;
    }
}

int main()
{
    int tab[] = {0, 1, 12, 4, 8};
    print_int_tab(tab, 5);
    ft_rev_int_tab(tab, 5);
    print_int_tab(tab, 5);

    return 0;
}