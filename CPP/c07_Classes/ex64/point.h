#ifndef POINT_H
#define POINT_H

class Point
{
private:
    float X;
    float Y;
public:
    Point(float x, float y);
    void Translate(float x, float y);
    void Display();
    float GetX();
    float GetY();
    ~Point();
};

#endif