#include "functions.h"

int arrayAdjustment(int array[], int size, int number) {
    if (size == 0) {
        return 0;
    }
    array[size - 1] = number % 10;
    number /= 10;
    return arrayAdjustment(array, size - 1, number);
}