#include <iostream>
#include <math.h>

using namespace std;

// function to show values at three given double type points of any
// double function, <myFunc>
void showResult(double a, double b, double c, double (*myFunc)(double)) {
	cout << "\nValue at point (" << a <<")\t=\t" << myFunc(a)
		<< "\nValue at point (" << b <<")\t=\t" << myFunc(b)
		<< "\nValue at point (" << c <<")\t=\t" << myFunc(c)
		<< "\n";

	return;
}
// -- END function


// Implementing mathematical functions to c++ function 

// Question 5, Part (a)
double fun_a(double a) {
	return ((a * sin(a)) - 3);
}
// Question 5, Part (b)
double fun_b(double a) {
	return (cos(a) - sin(a) - a);
}
// Question 5, Part (c)
double fun_c(double a) {
	return ((2 * a * a) + (5 *  a) - 9);
}
// Question 5, Part (d), example 1 from book pp. 5
double fun_d(double a) {
	return ((5 * cos(2 * a)) - (2 * sin(2 * a)));
}
// Question 5, Part (e), example 2 from book pp. 8
double fun_e(double a) {
	return (pow(a, 5) - (2 * pow(a, 3)) + (3 * a * a) - 1);
}
// -- END implementation

int main() {
	// if true, then asks for input from user otherwise will use initial.
	bool interactive = false;

	// variables storing initial values (if not interactive).
	double fP = 0, sP = 0.5, tP = 1;

	// if 'interactive' is set to true, then ask user to manually input
	// values of three points
	if (interactive) {
		cout << "Enter the first point: ";
		cin >> fP;
		cout << "Enter the second point: ";
		cin >> sP;
		cout << "Enter the third point: ";
		cin >> tP;
	}

	// starting preinting results
	cout << "\n******************* [ PART (a) ] *******************\n";
	showResult(fP, sP, tP, &fun_a);
	cout << "\n******************** [ END (a) ] *******************\n";

	cout << "\n******************* [ PART (b) ] *******************\n";
	showResult(fP, sP, tP, &fun_b);
	cout << "\n******************** [ END (b) ] *******************\n";

	cout << "\n******************* [ PART (c) ] *******************\n";
	showResult(fP, sP, tP, &fun_c);
	cout << "\n******************** [ END (c) ] *******************\n";

	cout << "\n******************* [ PART (d) ] *******************\n";
	showResult(fP, sP, tP, &fun_d);
	cout << "\n******************** [ END (d) ] *******************\n";

	cout << "\n******************* [ PART (e) ] *******************\n";
	showResult(fP, sP, tP, &fun_e);
	cout << "\n******************** [ END (e) ] *******************\n";

	return 0;
}
