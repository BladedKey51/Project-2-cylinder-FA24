#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder()
//raduis and height
{
	radius = 0.0;
	height = 0.0;
}

Cylinder::~Cylinder()
{
}

void Cylinder::setRadius(double r)
{
	// sets radius = r
	radius = r;
}

void Cylinder::setHeight(double h)
{
	// sets height = h
	height = h;
}

//Getters
double Cylinder::getRadius()
{
	return radius;
}

double Cylinder::getHeight()
{
	return height;
}

double Cylinder::calculateVolume()
{
	// Volume funtion for cylinder
	return pi * (getRadius()) * (getRadius()) * (getHeight());

	/* Instead of using pow to double my radius I just timesed it by itself.
	* I also did this in my surface area calcualtion
	*/
}

double Cylinder::calculateSurfaceArea()
{
	// Surface Area funtion for cylinder
	return 2 * pi* (getRadius ()) * (getHeight ()) + 2 * pi * (getRadius ()) * (getRadius ());
}