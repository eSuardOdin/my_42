/*
    Autorisé : Aucune
    But : Écrire une fonction qui met en minuscule chaque lettre.
    Prototype : char *ft_strcapitalize(char *str);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{

    int isNewWord = 1;
    while(*str != '\0')
    {

        // Reset word if space
        if((int)*str == 32)
        {
            isNewWord = 1;
        }
        
        // Check if new word
        if(isNewWord && ((int)*str >= 65 && (int)*str <= 90))
        {
            *str = (int)*str + 32;
        }
        str++;
        if(isNewWord)
        {
            isNewWord = 0;
        }
    }
    return str;
}

int main()
{
    char str[35] = "ceci 4est un -test oui Oui!";
    printf("%s\n", str);
    ft_strcapitalize(str);
    printf("%s\n", str);
    return 0;
}