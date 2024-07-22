/**
 *  Fonction Autorisées : Write
 *      ssize_t write(int fildes, const void *buf, size_t nbytes)
 *      -> Writes nbytes from buf to the file associeted by fildes
 * 
 * ---------------------------------------------
 * Écrire une fonction qui affiche ’N’ ou ’P’ suivant le signe de l’entier passé en
 * paramètre. Si n est négatif alors afficher ’N’. Si n est positif ou nul alors afficher
 * ’P’.
 * 
 * Prototype : void ft_is_negative(int n);
 */
#include <unistd.h>

void ft_is_negative(int n)
{
    char *result = n >= 0 ? "P\n" : "N\n";
    write(1, result, 2);
}

int main()
{
    ft_is_negative(3);
    ft_is_negative(0);
    ft_is_negative(-2);
    return 0;
}