/*
    Autorisé :
    But : Écrire une fonction qui affiche une chaîne de caractères à l’écran. Si cette chaîne
        contient des caractères non-imprimables, ils devront être affichés sous forme hexadécimale
        (en minuscules) en les précédant d’un "backslash".
    Prototype : void ft_putstr_non_printable(char *str);
*/
#include <stdio.h>
#include <unistd.h>

void print_hex(int n)
{
    // Getting the power of 16
    int pow = 1;
    while(pow < n)
    {
        pow *= 16;
        if(pow > n)
        {
            pow /= 16;
            break;
        }
    }
    int unit;
    char c_unit;
    char back = '\\';
    write(1, &back, 1);
    for(int i = pow; i >= 1; i /= 16)
    {
        unit = n / i;
        if(unit > 9)
        {
            c_unit = (char) unit + 55; // 10 + 55 = 65 ('A')
        }
        else
        {
            c_unit = (char) unit + 48; // 0 + 48 = 48 ('0')
        }
        write(1, &c_unit, 1);

        n = n % i;
        if(i == 1)
        {
            return;
        }
    }
}

void ft_putstr_non_printable(char *str)
{
    char c;
    char n = '\n';
    while(*str != '\0')
    {
        if((int) *str < 32 || (int) *str > 126)
        {
            print_hex((int) *str);
        }
        else
        {
            c = *str;
            write(1, &c, 1);
        }
        str++;
    }
    write(1, &n, 1);
}

int main()
{
    char *test_print = "Ceci est un test sans caracteres non printable.";
    ft_putstr_non_printable(test_print);
    char *test_not_print = "\tCeci est \v\n un test avec \tcaracteres non printable\a";
    ft_putstr_non_printable(test_not_print);
    printf("%s\n", test_not_print);
    return 0;
}