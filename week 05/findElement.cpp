#include <iostream>

const int MAX_SIZE = 100;

int findElement(const int arr[MAX_SIZE], int size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		std::cout << "Invalid input";
		return -1;
	}
	int wantedIndex = 0;
	bool hasNoSuchElement = false;

	for (int i = 0; i < size - 2; ++i)
	{
		if (arr[i + 1] > (arr[i] + arr[i + 2]) / 2)
		{
			hasNoSuchElement = true;
			wantedIndex = i + 1;
		}
	}

	if (!hasNoSuchElement)
	{
		return -1;
	}

	return wantedIndex;
}
