#include "./point.h"

int main(int argc, char **argv)
{
    // Pointer
    Point *p = new Point(1.5, 2.0);
    p->Display();
    p->Translate(-0.8, 4.7);
    p->Display();
    delete p;
    // On stack
    Point ps(8.23, .6);
    ps.Display();

}