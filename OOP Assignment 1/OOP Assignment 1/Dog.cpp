#include"Dog.h"


void Dog::setBreed(string name)
{
	breed = name;
}

void Dog::setColor(string name)
{
	color = name;
}

void Dog::setHeight(int feet)
{
	height = feet;
}

void Dog::setWeight(float lbs)
{
	weight = lbs;
}

void Dog::Shake()
{
	cout << "The dog shakes all the water off of itself!\n";
}

void Dog::Sit()
{
	cout << "The dog is now sitting\n";
}

void Dog::LayDown()
{
	cout << "The dog is now laying down\n";
}
