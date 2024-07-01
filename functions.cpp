#include "functions.h"

int LinearSearch(int array[], int size, int key) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}

void ArrayPrint(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n\n";
	return;
}
