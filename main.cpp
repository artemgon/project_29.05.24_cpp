#include "functions.h"

int main() {
	const int rows = 5, cols = 5;
	char array_1[rows][cols];
	int array_2[rows][cols];
	double array_3[rows][cols];
	MatrixFunction(array_1, rows, cols);
	cout << "\n\n";
	MatrixFunction(array_2, rows, cols);
	cout << "\n\n";
	cout << "\nMax is \n" << Maximal(array_2, rows, cols) << endl;
	cout << "\nMin is \n" << Minimal(array_2, rows, cols) << endl;
	MatrixFunction(array_3, rows, cols);
	cout << "\n\n";
	cout << "\nMax is \n" << Maximal(array_3, rows, cols) << endl;
	cout << "\nMin is \n" << Minimal(array_3, rows, cols) << endl;
	bubbleSort(array_2, rows, cols);
	MatrixPrint(array_2, rows, cols);
	cout << "\n\n";
	bubbleSort(array_3, rows, cols);
	MatrixPrint(array_3, rows, cols);
	return 0;
}