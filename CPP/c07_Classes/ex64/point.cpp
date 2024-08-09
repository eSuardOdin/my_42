#include "./point.h"
#include <iostream>

Point::Point(float x, float y)
{
    this->X = x;
    this->Y = y;
}

void Point::Display()
{
    std::cout << "The point coordinates : " << std::endl;
    std::cout << "X = " << this->X << std::endl;
    std::cout << "Y = " << this->Y << std::endl;
}

void Point::Translate(float x, float y)
{
    this->X += x;
    this->Y += y;
}
