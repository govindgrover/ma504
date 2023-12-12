#include <iostream>
#include <math.h>

using namespace std;

// M_PI is a mathematical constant, PI = 3.14... which is defined in
// math.h header file and is used in the following piece of code.

// function to calculate TSA of hemisphere
double TSA(double r) {
	return (3 * M_PI * r * r);
}

// function to calculate volume of hemisphere
double volume(double r) {
	return ((2 * M_PI * r * r * r) / 3.0);
}

// main function
int main() {
	double radius;

	// asking user to input radius of the hemisphere in cm.
	cout << "Enter radius of sphere (in cm): ";
	cin >> radius;

	// showing output.
	cout << "Volume & Surface Area of hemisphere with radius, "
		<< radius
		<< " in cm are: "
		<< volume(radius)
		<< " and "
		<< TSA(radius)
		<< " repectively.";

	return 0;
}
