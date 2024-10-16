#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:

public:
	double Radius;
	double getArea() { return (3.14 * Radius * Radius) ; }
};
