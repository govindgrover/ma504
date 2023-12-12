#include <iostream>

using namespace std;

const int DEFAULT_MATRIX_ORDER = 2;

int main() {
	int n = DEFAULT_MATRIX_ORDER;

	int matA[n][n], matB[n][n], matSum[n][n], matDiff[n][n];

	int SYMM[4][4];
	int tmp;

	{
		// taking user input for matrix A
		{
			cout << "\n************ [ MATRIX ENTRY FOR \'A\' ] ************\n";

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << "\nEnter integer element for "
						<< i << "th row and "
						<< j << "th column: ";

					cin >> matA[i][j];
				}
			}
		}

		// taking user input for matrix B
		{
			cout << "\n************ [ MATRIX ENTRY FOR \'B\' ] ************\n";

			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {
					cout << "\nEnter integer element for "
						<< i << "th row and "
						<< j << "th column: ";

					cin >> matB[i][j];
				}
			}
		}

		// summing matrices A and B & showing output
		{
			cout << "\n*********** [ MATRIX SOLVE FOR \'A + B\' ] ***********\n";

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matSum[i][j] = matA[i][j] + matB[i][j];
				}
			}

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << matSum[i][j] << " ";
				}
				cout << "\n";
			}

		}

		// subtracing matrix B from A & showing output
		{
			cout << "\n*********** [ MATRIX SOLVE FOR \'A - B\' ] ***********\n";

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					matDiff[i][j] = matA[i][j] - matB[i][j];
				}
			}

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << matDiff[i][j] << " ";
				}
				cout << "\n";
			}

		}

		cout << "\n**********************************************************\n";
	}

	// taking input from user for 4*4 symmetric matrix & printing the same
	{
		cout << "\n************ [ SYMMETRIC MATRIX ENTRY FOR \'SYMM\' ] ************\n";

		for (int i = 0; i < 4; i++) {
			for (int j = i; j < 4; j++) {
				cout << "\nEnter integer element for "
					<< i << "th row and "
					<< j << "th column: ";

				cin >> tmp;
				SYMM[i][j] = tmp;
				SYMM[j][i] = tmp;
			}
		}

		cout << "\n****************** [ SYMMETRIC MATRIX OUTPUT ] ******************\n";

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << SYMM[i][j] << " ";
			}
			cout << "\n";
		}

		cout << "\n*****************************************************************\n";

	}

	return 0;
}
