#include <iostream>
#include <math.h>

using namespace std;

double fun_b(double a) {
	return (
		cos(a) - sin(a) - a
	);
}

int main() {
  double fP, sP, tP, fV, sV, tV;

  cout << "Enter the first point: ";
  cin >> fP;
  cout << "\nEnter the second point: ";
  cin >> sP;
  cout << "\nEnter the third point: ";
  cin >> tP;

  fV = fun_b(fP);
  sV = fun_b(sP);
  tV = fun_b(tP);

  cout << "\nValue at first point: " << fV
       << " and value at second point: " << sV
       << " and value at third point: " << tV;

  return 0;
}
