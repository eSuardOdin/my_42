/*
    Autorisé : Aucune
    But : • Ecrire une fonction qui convertit le début de la chaîne pointée par str en entier de type
int
        • str peut commencer par un nombre arbitraire de ‘white space‘ (comme defini par isspace(3))
        • str peut ensuite être suivi par un nombre arbitraire de signe + et de signe -. Le signe -
fera changer le signe de l’entier retourné en fonction du nombre de signe - et si celui ci
est pair ou impair.
        • Pour finir str devra être composée de chiffre de la base 10
        • Votre fonction devra lire str tant que celle ci suit les règles au dessus et elle doit retourner
le nombre trouvé jusque là.
        • Vous ne devriez pas prendre en compte les overflows et les underflows, le résultat est
considérer comme indéfini dans ces cas.
        • Vous pouvez comparer votre fonction avec la vrai fonction atoi à part la partie sur les
signes ainsi que l’overflow.

    Exemple : "---+--+1234ab567" -> -1234
    Prototype : int ft_atoi(char *str);
*/
#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{

    // Result to return
    int res = 0;
    // Number of '-' signs
    int neg_n = 0;
    // Index of the first digit
    char *back_ptr = NULL;
    int n_index = 0;
    // Power of 10
    int pow = 0;
    // Checking for whitespace
    while(
        *str == ' '     ||
        *str == '\f'    ||
        *str == '\n'    ||
        *str == '\r'    ||
        *str == '\t'    ||
        *str == '\v'
        )
    {
        str++;
        n_index++;
    }

    // Checking for + or - signs
    while(
        *str == '-'     ||
        *str == '+'
        )
    {
        neg_n = *str == '-' ? neg_n + 1 : neg_n;
        str++;
        n_index++;
    }

    
    // Checking for digits
    while(*str >= '0' && *str <= '9')
    {
        if(back_ptr == NULL)
        {
            back_ptr = str;
        }
        str++;
        pow = (pow == 0) ? 1 : pow * 10;
    }

    // Calculate number
    // printf("Index: %d\nChar: %d\n", n_index, str[n_index]);
    while(*back_ptr >= '0' && *back_ptr <= '9')
    {
        // printf("Index : %d\n", n_index);
        res += ((int)(*(back_ptr++) - '0')) * pow;
        if(pow == 1)
        {
            break;
        }
        pow /= 10;
    }
    return (neg_n % 2 == 0) ? res : -res;
}

int main()
{
    char *str = "   \n\r\n  \t \v++-6-+-4567";   
    // printf("%d white space\n", ft_atoi(str));
    printf("%d\n", ft_atoi(str));
    return 0;
}