#include "./point.h"
#include <iostream>

Point::Point(float x, float y)
{
    this->X = x;
    this->Y = y;
}

Point::~Point()
{
    std::cout << "Point destructed" << std::endl;
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

float Point::GetX()
{
    return X;
}


float Point::GetY()
{
    return Y;
}
