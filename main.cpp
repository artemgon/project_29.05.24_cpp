#include "functions.h"

int main() {
	const int size = 5;
	int a[size] = { 1, 2, 3, 4, 5 }, key, index;
	ArrayPrint(a, size);
	cout << "Please, enter the key: ";
	cin >> key;
	index = LinearSearch(a, size, key);
	if (index != -1) {
		cout << "\nThe index of key is " <<
			index << '\n';
	}
	else {
		cout << "\nError\n";
	}
	return 0;
}