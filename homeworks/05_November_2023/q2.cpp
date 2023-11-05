#include <iostream>

using namespace std;

/*
Q: Calculate the final amount three years after investing Rs. 7000 at a rate of @18% Simple interest.
*/

int main() {
	float amt = 7000;
	int years = 3;
	float rate = 18;
	
	float interest_amt;

	interest_amt = amt * years * (rate / 100);

	cout << "Final Amount (in Rs.) = " << amt + interest_amt;

	return 0;
}
