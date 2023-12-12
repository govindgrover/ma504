#include <iostream>
#include <math.h>

using namespace std;

double fun_c(double a) {
  return (
    (2 * a * a) + (5 *  a) - 9
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

  fV = fun_c(fP);
  sV = fun_c(sP);
  tV = fun_c(tP);

  cout << "\nValue at first point: " << fV
       << " and value at second point: " << sV
       << " and value at third point: " << tV;

  return 0;
}
