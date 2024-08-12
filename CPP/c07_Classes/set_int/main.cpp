#include <iostream>
#include "./set_int.h"

int main(int argc, char **argv)
{
    set_int *s = new set_int(20);
    s->display();
    s->add_value(1);
    s->add_value(5);
    s->add_value(9);
    s->add_value(19);
    s->add_value(8);
    s->add_value(4);
    s->add_value(2);
    s->add_value(1);
    int test;
    std::cin >> test;
    int is_present = s->is_present(test);
    if(is_present >= 0)
    {
         std::cout << test << " is present on index " << is_present << std::endl;
    }
    s->display();
    delete s;
    return 0;
}