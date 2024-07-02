#include "functions.h"

int BinToDec(int number) {
    int sum = 0, counter = 1;
    for (int i = number; i > 0; i /= 10) {
        if (i % 10 == 1) {
            sum += counter;
            counter *= 2;
        }
        else if (i % 10 == 0) {
            counter *= 2;
        }
        else {
            cout << "\nError occurred \n";
            return -1;
        }
    }
    return sum;
}