#pragma once
#include <string>
using namespace std;

class Shape
{
private:
	string color = "Default : grey";
public:
	void setColor(string name) { color = name; }
	string getColor() { return color; }

	double getArea();
};
