#ifndef Cylinder_H
#define Cylinder_H

class Cylinder
{
public:

	// Constructor and Destructor
	Cylinder();
	~Cylinder();

	// Setters
	void setRadius(double r);
	void setHeight(double h);

	// Getters
	double getRadius();

	double getHeight();

	double calculateVolume();

	double calculateSurfaceArea();

	/* The Getters show which values im am using for my height and radius as well as what values I am calculating with 
	* such values
	*/

private:
	double radius;	// Raduis value = r
	double height;	// Height value = h
	double pi = 3.14159; // pi value
};


#endif // !Cylinder_H
