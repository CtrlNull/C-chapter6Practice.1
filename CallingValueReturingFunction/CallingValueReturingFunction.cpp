// This program demonstrates two value-returning functions
// The square function is a mathematical statement

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double getRadius();
double squares(double);

int main()
{
	const double PI = 3.14159;		// Constant for pi
	double radius;					// To hold the circle's radius
	double area;					// To hold the circle's area

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Get the radius of the circle
	cout << "This program calculates the area of ";
	cout << "a circle.\n";
	radius = getRadius();

	// Caculate the area of the circle
	area = PI * squares(radius);

	// Display the area
	cout << "The area is " << area << endl;
	return 0;
}

/*
	This function asks the user to enter the radius of
	the circle and then returns that numbers as a double
*/

double getRadius()
{
	double rad;

	cout << "Enter the radius of the circle: ";
	cin >> rad;
	return rad;
}

/*
	This function accepts a double arguments and returns
	the square of the arguments as a double
*/

double squares(double number)
{
	return number * number;
}