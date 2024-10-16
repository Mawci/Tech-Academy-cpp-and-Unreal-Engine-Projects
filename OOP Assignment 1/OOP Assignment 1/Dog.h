#pragma once

#include <string>
#include <iostream>
using namespace std;


class Dog {
private:
	string breed;
	string color;
	float height;
	float weight;
public:
	void setBreed(string name);
	void setColor(string name);
	void setHeight(int feet);
	void setWeight(float lbs);

	string getBreed() { return breed; }
	string getColor() { return color; }
	float getHeight() { return height; }
	float getWeight() { return weight; }

	void Shake();
	void Sit();
	void LayDown();
};