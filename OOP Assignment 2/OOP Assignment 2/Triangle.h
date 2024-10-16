#pragma once
#include "Shape.h"


class Triangle : public Shape
{
private:

public:
	double Height;
	double Width;
	double getArea() { return .5 * (Height * Width); }
};