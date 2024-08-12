#include "./set_int.h"
#include <iostream>

set_int::set_int(int num_el)
{
    values = new int[max = num_el];
    current = 0;
}

set_int::~set_int()
{
    delete values;
    std::cout << "Object destructed" << std::endl;
}


int set_int::add_value(int v)
{
    if(current < max)
    {
        values[current++] = v;
        return 1;
    }
    return 0;
}

void set_int::display()
{
    std::cout << "Contained : " << current << std::endl; 
    if(current == 0)
    {
        std::cout << "Nothing to display" << std::endl;
    }
    else
    {

        for(int i = 0; i < current; i++)
        {
            std::cout << values[i] << " ";
        }
        std::cout << std::endl;
    }
}

/// @brief Checks if an integer is present in the set.
/// @param v Value to test
/// @return The index or -1 if not present
int set_int::is_present(int v)
{
    if(current == 0) return -1;
    for(int i = 0; i < current; i++)
    {
        if(values[i] == v)
        {
            return i;
        }
    }
    return -1;
}