/*
    Autorisé :
    But : Reproduire à l’identique le fonctionnement de la fonction strstr (man strstr).
    Prototype : char *ft_strstr(char *str, char *to_find);
*/
#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    printf("Needle : %s\n", str);
    printf("Haystack : %s\n", to_find);
    char *needle = to_find;
    char *res;
    int debug_index = 0;
    // Iterate through target
    while(*str != '\0')
    {
        // If matching first char
        if(*str == *needle)
        {
            // Get pointer to beginning of substring
            res = str;
            // Increment as long as equal
            while(*str == *needle && *needle != '\0')
            {
                str++;
                needle++;
            }
            // If end of needle, return pointer to substring beginning
            if(*needle == '\0')
            {
                return res;
            }
            // Else, reset
            needle = to_find;
        }
        str++;
        debug_index++;
    }
    return NULL;
}


int main()
{
    char *haystack = "Ceci est, certes, une string, mais aussi et surtout, aussitot dit, aussitot fait : une botte de foin !";
    char *needle = "a";
    char *substr = ft_strstr(haystack, needle);
    if(substr != NULL)
    {
        printf("Found.\n");
    } 
    else
    {
        printf("Not found.\n");
    }
    return 0;
}