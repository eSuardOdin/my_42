/*
    Autorisé :
    But : • Écrire un programme qui affiche les arguments reçus en ligne de commande.
          • • Un par ligne dans l’ordre inverse de la ligne de commande.
          • Vous devez afficher tous les arguments, sauf argv[0].
    Prototype :
*/
#include <stdio.h>
#include <unistd.h>


int main(int argc, char **argv)
{
    char ret = '\n';
    for(int i = argc - 1; i > 0; i--)
    {
        while(*(argv[i]))
        {
            write(1, argv[i]++, 1);
        }
        write(1, &ret, 1);
    }
    return 0;
}