#include <iostream>
#include <math.h>

using namespace std;

// Setting preision of EPSILON to accordingly break out of the loop. 
const int PRECISION_DIGITS = 2;
const double EPSILON = (1.0 / pow(10, PRECISION_DIGITS));
// -- END setting

// Function for Bisection Algorithm
void bisectionAlgo(double start, double end, double (*mathFunc)(double)) {
	double mid;

	// if the product is greater than zero it means, that the function 
	// <mathFunc> does not cross the x-axis i.e., the provided interval
	// does not contain the xero of the function.
	if ((mathFunc(start) * mathFunc(end)) > 0) {
		cout << "Error: Root does not lie between the provided interval.";
		return;
	}

	// otherwise we will use the algorithm to find out the first root in the
	// provided interval.
	else {

		// while the difference of intetrval is greater than the given
		// precision execute the following piece of code as the part of
		// algorithm.
		while ((end - start) >= EPSILON) {

			// assigning 'mid' the mid-point in the interval to bisect it into
			// two sub-intervals and then proceed.
			mid = (start + end) / 2.0;

			// if the function, <mathFunc> gives zero at the mid-point, then
			// break the loop.
			if(mathFunc(mid) == 0) {
				break;
			}

			// otherwise check if the root lies in the first-half of the
			// interval or not.
			else if ((mathFunc(start) * mathFunc(mid)) < 0) {
				// if yes, then chop the interval into two and set end to
				// middle.
				end = mid;
			}

			// check if the root lies in the second-half of the interval or not.
			else if ((mathFunc(mid) * mathFunc(end)) < 0) {
				// if yes, then chop the interval into two and set start from
				// middle.
				start = mid;
			}
		}
	}

	// printing the root
	cout << "Success: Root of the provided function is: " << mid;

	return;
}
// -- END function

// Implementing mathematical functions to c++ function 
// Question 1, Part (a)
double first_equation(double x) {
	return ((x * x) - (2 * x) + 4);
}

// Question 1, Part (b)
double second_equation(double x) {
	return ((2 * x * x) + (5 * x) - 9);
}

// Question 1, Part (c)
double third_equation(double x) {
	return ((-4 * x * x) - (10 * x) + 5);
}
// -- END implementation

int main() {
	double x, y;

	// following are the pieces of code to implement bisection algo.
	{
		cout << "************ [ INTERVAL FOR FIRST EQUATION ] ************\n";

		cout << "Enter starting value: ";
		cin >> x;

		cout << "Enter ending value: ";
		cin >> y;

		bisectionAlgo(x, y, &first_equation);

		cout << "\n************************ [ END ] ************************\n";
	}

	{
		cout << "\n************ [ INTERVAL FOR SECOND EQUATION ] ************\n";

		cout << "Enter starting value: ";
		cin >> x;

		cout << "Enter ending value: ";
		cin >> y;

		bisectionAlgo(x, y, &second_equation);

		cout << "\n************************* [ END ] ************************\n";
	}

	{
		cout << "\n************ [ INTERVAL FOR THIRD EQUATION ] ************\n";

		cout << "Enter starting value: ";
		cin >> x;

		cout << "Enter ending value: ";
		cin >> y;

		bisectionAlgo(x, y, &third_equation);

		cout << "\n************************ [ END ] ************************\n";
	}

	return 0;
}
