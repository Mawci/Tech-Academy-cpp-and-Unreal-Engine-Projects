#include "Dog.h"



int main()
{
	Dog myDog;
	myDog.setBreed("Hound");
	myDog.setColor("Brown");
	myDog.setHeight(2);
	myDog.setWeight(60);

	myDog.Shake();
	myDog.Sit();
	myDog.LayDown();

	return 0;
}