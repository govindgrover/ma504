#include <iostream>
#include <math.h>

using namespace std;

double fun_a(double a) {
	return (
		(a * sin(a)) - 3
	);
}

int main() {
  double fP, sP, tP, fV, sV, tV;

  cout << "Enter the first point: ";
  cin >> fP;
  cout << "Enter the second point: ";
  cin >> sP;
  cout << "Enter the third point: ";
  cin >> tP;

  fV = fun_a(fP);
  sV = fun_a(sP);
  tV = fun_a(tP);

  cout << "\nValue at first point: " << fV
       << " and value at second point: " << sV
       << " and value at third point: " << tV;

  return 0;
}
