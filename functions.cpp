#include "functions.h"

int Minimal(int array[][5], int rows, int cols)
{
	int min = array[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (array[i][j] < min)
				{
					min = array[i][j];
				}
				
			}
		}
	}
	return min;
}

double Minimal(double array[][5], int rows, int cols)
{
	double min = array[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (array[i][j] < min)
				{
					min = array[i][j];
				}

			}
		}
	}
	return min;
}

int Maximal(int array[][5], int rows, int cols)
{
	int max = array[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
		}
	}
	return max;
}

double Maximal(double array[][5], int rows, int cols)
{
	double max = array[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (array[i][j] > max)
				{
					max = array[i][j];
				}
			}
		}
	}
	return max;
}

int bubbleSort(int array[][5], int rows, int cols)
{
	cout << "\n";
	long i, j, k;
	int x;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) {
			for (k = cols - 1; k > j; k--) {
				if (array[i][k - 1] > array[i][k]) {
					x = array[i][k - 1];
					array[i][k - 1] = array[i][k];
					array[i][k] = x;
				}
			}
		}
	}
	return 0;
}

double bubbleSort(double array[][5], int rows, int cols)
{
	cout << "\n";
	long i, j, k;
	double x;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++) {
			for (k = cols - 1; k > j; k--) {
				if (array[i][k - 1] > array[i][k]) {
					x = array[i][k - 1];
					array[i][k - 1] = array[i][k];
					array[i][k] = x;
				}
			}
		}
	}
	return 0;
}

int MatrixFunction(int array[][5], int rows, int cols)
{
	int number = 90;
	cout << "\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = number;
			cout << array[i][j] << "\t";
			number -= 1;
		}
		cout << endl;
	}
	return 0;
}

double MatrixFunction(double array[][5], int rows, int cols)
{
	double number = 90;
	cout << "\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = number;
			cout << array[i][j] << "\t";
			number -= 2.2;
		}
		cout << endl;
	}
	return 0;
}

char MatrixFunction(char array[][5], int rows, int cols)
{
	int number = 65;
	cout << "\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			array[i][j] = char(number);
			cout << array[i][j] << "\t";
			number += 1;
		}
		cout << endl;
	}
	return '0';
}