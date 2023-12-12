#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int N = 50;
	int a[N], b[N];

	// first sequence
	{
		cout << "\n************ [ PRINTING FIRST SEQUENCE ] ************\n";
		
		// defining initial terms.
		a[0] = 1;
		a[1] = 2;

		// calculating terms upto N
		for (int i = 0; i <= (N - 2); i++) {
			a[(i + 2)] = (2 * a[(i)]) + (4 * a[(i + 1)]);
		}

		// printing all of the terms.
		for (int j = 0; j < N; j++) {
			cout << a[j] << ", ";
		}
		cout << a[N] << ";";

		cout << "\n******************* [ END first ] *******************\n";
	}
	// -- END first seq.

	// second sequence
	{
		cout << "\n************ [ PRINTING SECOND SEQUENCE ] ************\n";

		// defining initial terms.
		b[0] = 0;
		b[1] = 2;
		b[2] = 3;

		// calculating terms upto N
		for (int i = 0; i <= (N - 3); i++) {
			b[(i + 3)] = b[i] - b[(i + 1)] + (4 * b[(i + 2)]);
		}

		// printing all of the terms.
		for (int j = 0; j < N; j++) {
			cout << b[j] << ", ";
		}
		cout << b[N] << ";";

		cout << "\n******************** [ END first ] *******************\n";
	}
	// -- END second seq.

	return 0;
}
