#include "functions.h"

int GameFunction(int random_n)
{
	int user_number, counter = 0;
	cout << "\nEnter a number: ";
	do
	{
		cin >> user_number;
	} while (user_number > 9999 || user_number < 1000);
	for (int i = random_n; i > 0; i /= 10)
	{
		for (int j = user_number; j > 0; j /= 10)
		{
			if (i % 10 == j % 10)
			{
				counter++;
				//cout << "Number " << j % 10 << " is on right place.";
 			}
		}
	}
	cout << "\nComputer number = " << random_n << endl;
	return counter;
}