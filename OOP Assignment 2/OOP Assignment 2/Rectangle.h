#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	
public:
	double Height;
	double Width;
	double getArea() { return Height * Width; }
};


