/*
    Autorisé : write()
    But : • Écrire un programme qui affiche le nom du programme.
*/
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    while(*(argv[0]))
    {
        write(1, argv[0]++, 1);
    }
    char ret = '\n';
    write(1, &ret, 1);
    return argc;
}