#include <iostream>

const int MAX_SIZE = 100;

bool isPermutation(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE], int size1, int size2)
{
	if (size1 != size2) return false;
	if (size1 <= 0 || size2 <= 0 || size1 > MAX_SIZE || size2 > MAX_SIZE)
	{
		return false;
	}

	int hist[10] = {};

	for (int i = 0; i < size1; ++i)
	{
		hist[arr1[i]]++;
		hist[arr2[i]]++;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (hist[i] % 2)
		{
			return false;
		}
	}

	return true;
}
