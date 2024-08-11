#include <iostream>
#include "./set_char.h"

set_char::set_char()
{
    for (int i = 0; i < N_CHAR_MAX; i++)
    {
        set[i] = 0;
    }
}

int set_char::get_card()
{
    int cardinal = 0;
    while (set[cardinal] != 0)
    {
        cardinal++;
    }
    return cardinal;
}

int set_char::add_char(char c)
{
    if(get_card() != N_CHAR_MAX)
    {
        
        set[get_card()] = c;
        return 1;
    }
    return 0;
}

int set_char::is_char_present(char c)
{
   for (int i = 0; i < N_CHAR_MAX; i++)
    {
        if(set[i] == c) return 1;
        if(set[i] == 0)
        {
            return 0;
        }
    }
    return 0;
}

void set_char::display()
{
    for (int i = 0; i < N_CHAR_MAX; i++)
    {
        if(set[i] == 0)
        {
            std::cout << std::endl;
            return;
        }
        std::cout << set[i];
    }
    std::cout << std::endl;
    
}