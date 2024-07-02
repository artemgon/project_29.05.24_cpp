#include "lib.h" 

int MatrixFunction(int array[][5], int rows, int cols);

double MatrixFunction(double array[][5], int rows, int cols);

char MatrixFunction(char array[][5], int rows, int cols);

int Minimal(int array[][5], int rows, int cols);

double Minimal(double array[][5], int rows, int cols);

int Maximal(int array[][5], int rows, int cols);

double Maximal(double array[][5], int rows, int cols);

int bubbleSort(int array[][5], int rows, int cols);

double bubbleSort(double array[][5], int rows, int cols);

template <class T>
void MatrixPrint(T array[][5], int rows, int cols)
{
	cout << "\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}