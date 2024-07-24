/**
 *  Autorisé : Aucune fonction
 * 
 * ----------------------------------------------
 * Écrire une fonction qui trie un tableau d’entiers par ordre croissant.
 * Les paramètres sont un pointeur sur entier et le nombre d’entiers dans le tableau.
 * 
 * Prototype : void ft_sort_int_tab(int *tab, int size);
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


void ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int pos;
    int temp;
    int isHigher;
    while(i < size - 1)
    {
        // print_int_tab(tab, size);
        pos = i+1;
        isHigher = 0;
        while(pos < size)
        {
            if(tab[i] > tab[pos])
            {
                temp = tab[i];
                tab[i] = tab[pos];
                tab[pos] = temp;
                isHigher = 1;
            }
            pos++;
        }
        if(!isHigher)
        {
            i++;
        }
    }
}

int main()
{
    int tab[] = {9,3,6,7,4};
    print_int_tab(tab, 5);
    ft_sort_int_tab(tab, 5);
    print_int_tab(tab, 5);

    printf("\n");
    int tab2[] = {87,22,31,6,7,43,4,98,7,-5,8,12,25,19,0,8};
    print_int_tab(tab2, 16);
    ft_sort_int_tab(tab2, 16);
    print_int_tab(tab2, 16);

    return 0;
}