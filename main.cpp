#include "functions.h"

int main()
{
	srand(time(NULL));
	const int size = 4;
	int number = rand() % 9000 + 1000, array_1[size],tries = 0, number_1, array_2[size], bulls = 0;
	number = rand() % 9000 + 1000;
	arrayAdjustment(array_1, size, number);
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array_1[i] == array_1[j])
			{
				do
				{
					array_1[j] = rand() % 10;
				} while (array_1[i] == array_1[j]);
			}
		}
	}
	do
	{
		do
		{
			cout << "\nEnter a number(The digits must be all different): ";
			cin >> number_1;
			tries++;
			arrayAdjustment(array_2, size, number_1);
			for (int i = 0; i < size - 1; i++)
			{
				for (int j = i + 1; j < size; j++)
				{
					if (array_2[i] == array_2[j])
					{
						cout << "\nError. Try again next time.\n";
						exit(0);
					}
				}
			}
		} while (number_1 > 9999 || number_1 < 1000);
		bulls = 0;
		for (int i = 0; i < size; i++)
		{
			if (array_2[i] == array_1[i])
			{
				cout << array_2[i] << " is bull" << endl;
				bulls++;
			}
			for (int j = 0; j < size; j++)
			{
				if (array_2[i] == array_1[j] && i != j)
				{
					cout << array_2[i] << " is cow" << endl;
				}
			}
		}
	} while (bulls != 4);
	cout << "\nWin!!!" << " Tries: " << tries;
}