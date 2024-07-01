#include "functions.h"

template <class T>
T LinearSearch(T array[], int size, T key)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}

int main()
{	
	const int size = 5;
	float a[size] = { 1.1,2.2,3.3,4.4,5.5 }, key;
	int index;
	cout << "Please, enter the key:";
	cin >> key;
	index = LinearSearch(a, size, key);
	if (index != -1) {
		cout << "\nThe index of key is " <<
			index << '\n';
	}
	else {
		cout << "\n Error";
	}
	return 0;
}