#include <iostream>

int getCount(const int* arr, int size, int k)
{
	if (!arr) return 0;
	int counter = 0;

	for (int i = 0; i < size; ++i)
	{
		if (!(arr[i] % k)) counter++;
	}

	return counter;
}

void copyElements(const int* source, int* dest, int size, int k, int& destIndex)
{
	if (!source) return;
	for (int i = 0; i < size; ++i)
	{
		if (!(source[i] % k))
		{
			dest[destIndex] = source[i];
			destIndex++;
		}
	}
}

int* modifiedArr(int* arr1, int* arr2, int size1, int size2, int k)
{
	int resSize = getCount(arr1, size1, k) + getCount(arr2, size2, k);

	int* res = new int[resSize];
	int currentIndex = 0;

	copyElements(arr1, res, size1, k, currentIndex);
	copyElements(arr2, res, size2, k, currentIndex);

	return res;
}
