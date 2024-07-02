#include "lib.h" 

template<class T>
void selectSort(T a[], long size) {
	long i, j, k;
	T x;
	for (i = 0; i < size; i++) {
		k = i;
		x = a[i];
		for (j = i + 1; j < size; j++)
			if (a[j] < x) {
				k = j;
				x = a[j];
			}
		if (k != i) {
			a[k] = a[i];
			a[i] = x;
		}
	}
}

template<class T>
T BinarySearch(T A[], int Lb, int Ub, T Key) {
	int M;
	while (1) {
		M = (Lb + Ub) / 2;
		if (Key < A[M])
			Ub = M - 1;
		else if (Key > A[M])
			Lb = M + 1;
		else
			return M;
		if (Lb > Ub)
			return -1;
	}
}