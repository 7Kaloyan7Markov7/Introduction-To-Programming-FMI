#include <iostream>

const int MAX_SIZE = 100;

int AnalyzeArray(const int arr[MAX_SIZE], int size)
{
	if (size < 2 || size >= MAX_SIZE)
	{
		return -1;
	}

	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	if (sum % 2) return 0;

	int tempSum = 0;

	for (int i = 0; i < size; ++i)
	{
		tempSum += arr[i];
		if (tempSum == sum / 2 && i + 1 < size)
		{
			return 1;
		}
	}

	return 0;
}
