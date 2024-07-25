/*
    Autorisé : Aucune
    But : Écrire une fonction qui met en minuscule chaque lettre.
    Prototype : char *ft_strcapitalize(char *str);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{

    
    if((int)*(str+1) >= 97 && (int)*(str+1) <= 122)
    {
        *(str) = (int)*(str) - 32;
    }
    int isNewWord = 0;
    while(*str != '\0')
    {

        // Reset word if space
        if((int)*str == 32)
        {
            isNewWord = 1;
        }
        
        // Check if new word
        if(isNewWord && ((int)*(str+1) >= 97 && (int)*(str+1) <= 122))
        {
            *(str+1) = (int)*(str+1) - 32;
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

    char str2[35] = "ceci est un autre test lol m;";
    printf("%s\n", str2);
    ft_strcapitalize(str2);
    printf("%s\n", str2);
    return 0;
}