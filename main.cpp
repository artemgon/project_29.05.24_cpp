#include "functions.h"

int main() {
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE], key, index;
	for (int i = 0; i < SIZE; i++) {
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	selectSort(ar, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	cout << "Enter any digit:";
	cin >> key;
	index = BinarySearch(ar, 0, SIZE, key);
	cout << "Index - " << index << "\t";
	cout << "\n\n";
	return 0;
}