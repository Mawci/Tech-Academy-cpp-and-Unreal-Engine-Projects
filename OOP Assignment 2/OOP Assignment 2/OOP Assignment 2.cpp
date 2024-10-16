#include <iostream>
using namespace std;
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"


int main()
{
    Triangle myTriangle;
    myTriangle.Height = 10;
    myTriangle.Width = 5;
    cout << myTriangle.getColor() << '\n';
    cout << myTriangle.getArea() << '\n';

    Rectangle myRect;
    myRect.Height = 10;
    myRect.Width = 5;
    myRect.setColor("Light Blue");
    cout << myRect.getColor() << '\n';
    cout << myRect.getArea() << '\n';

    Circle myCircle;
    myCircle.Radius = 5;
    myCircle.setColor("Yellow");
    cout << myCircle.getColor() << '\n';
    cout << myCircle.getArea() << '\n';
}

