#include "functions.h"

int main()
{
	srand(time(NULL));
	int comp_number = rand() % 9000 + 1000;
	cout << GameFunction(comp_number);
	return 0;
}