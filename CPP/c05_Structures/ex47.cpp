/*
    Soit le modèle de struct suivant :
    struct point
    {
        char name;
        int x, y;
    };
    Ecrire une fonction qui recoit en argument un point et affiche le contenu sous la forme :
        point B de coordonnées x:10 y:12
    a. Par valeur
    b. Par adresse
    c. Par reference
*/

#include <iostream>

struct point
{
    char name;
    int x, y;
};

void print_by_value(point p)
{
    std::cout<<"Printing by value\nPoint " << p.name << " de coordonnées x:" << p.x << " y:" << p.y << std::endl;
}

void print_by_address(point *p)
{
    std::cout<<"Printing by address\nPoint " << p->name << " de coordonnées x:" << (*p).x << " y:" << p->y << std::endl;
}

void print_by_reference(point& p)
{
    std::cout<<"Printing by reference\nPoint " << p.name << " de coordonnées x:" << p.x << " y:" << p.y << std::endl;
}

int main(int argc, char **argv)
{
    point A;
    A.name = 'A';
    A.x = 5;
    A.y = 7;
    point& B = A; 
    print_by_value(A);
    print_by_address(&A);
    print_by_reference(B);
    return 0;
}