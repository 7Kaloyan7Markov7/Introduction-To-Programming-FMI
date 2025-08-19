#include <iostream>

int getAverage(const int* arr, size_t size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	return sum / size;
}

int findMaxMin(const int* arr, size_t size, int& minVal, int& maxVal)
{
	if (!arr || !size) return -1;

	int highestValue = arr[0];
	int lowestValue = arr[0];

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] > highestValue) highestValue = arr[i];
		if (arr[i] < lowestValue) lowestValue = arr[i];
	}
	minVal = lowestValue;
	maxVal = highestValue;

	return getAverage(arr, size);
}
