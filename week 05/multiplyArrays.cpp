#include <iostream>

const int MAX_SIZE = 100;

void multiplyArrays(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE], int result[2 * MAX_SIZE], int size1, int size2)
{
	int smallerSize = size1 < size2 ? size1 : size2;
	int anotherIterations = size1 - size2;
	anotherIterations = anotherIterations < 0 ? -anotherIterations : anotherIterations;

	for (int i = 0; i < smallerSize; ++i)
	{
		result[i] = arr1[i] * arr2[i];
	}

	for (int i = 0; i < anotherIterations; ++i)
	{
		if (smallerSize == size1)
			result[smallerSize + i] = arr2[smallerSize + i];
		else
			result[smallerSize + i] = arr1[smallerSize + i];
	}
}
