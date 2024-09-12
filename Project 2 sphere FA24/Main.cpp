/*
Lane Jones-Popp
Computer Science Fall 2024
Sept. , 17
Lab 2, Cylinder lab
This lab is used to show us how to use different files and how to set up different forms of code. Demo of how to write code involving
math procedures.
*/

#include <iostream>
#include "Cylinder.h"

int main()
{
	Cylinder s;
	s.setHeight(4);
	s.setRadius(3);
	std::cout << "The volume of the Cylinder is:" << s.calculateVolume() << std::endl
		<< "The surface area of the Cylinder is:" << s.calculateSurfaceArea() << std::endl
		; return 0;
}
/*this set of code shows the main function of my project which is to Show either the surface area or volume 
 and then calculate either one and display it correctly*/