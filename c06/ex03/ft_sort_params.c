/*
    Autorisé :
    But : • Écrire un programme qui affiche les arguments reçus en ligne de commande triés
    par ordre ascii.
          • Vous devez afficher tous les arguments, sauf argv[0].
*/
#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
        {
            return (int)*s1 - (int)*s2;
        }
        s1++;
        s2++;
    }
    // If end of the two strings
    if(*s1 == *s2)
    {
        return 0;
    }
    // If s1 shorter, return negative, else return positive.
    return (*s1 == '\0') ? -1 : 1;
}


int main(int argc, char **argv)
{
    for(int i = 1; i < argc - 1; i++)
    {
        for(int j = i+1; j < argc; j++)
        {
            if(ft_strcmp(argv[i], argv[j]) > 0)
            {
                char *temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
    // while(i < argc - 1)
    // {
    //     j = i + 1;
    //     is_sorted = 1;
    //     while (j < argc)
    //     {
    //         int cmp = ft_strcmp(argv[i], argv[j]);
    //         // If unsorted
    //         if(cmp > 0)
    //         {
    //             char *temp = argv[i];
    //             argv[i] = argv[j];
    //             argv[j] = temp;
    //             is_sorted = 0;
    //         }
    //         j++;
    //     }
    //     if(is_sorted)
    //     {
    //         i++;
    //         // is_sorted = 0;
    //     }
    // }
    char ret = '\n';
    for(int i = 1; i < argc; i++)
    {
        while(*(argv[i]))
        {
            write(1, argv[i]++, 1);
        }
        write(1, &ret, 1);
    }
    return 0;
}