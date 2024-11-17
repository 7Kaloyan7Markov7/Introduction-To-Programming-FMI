#include <iostream>

const int MAX_SIZE = 100;

unsigned increasingSequence(const int arr[MAX_SIZE], unsigned size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		std::cout << "Invalid input";
		return -1;
	}

	int currentSeq = 1;
	int highestSeq = 1;

	for (int i = 0; i < size - 1; ++i)
	{
		if (arr[i] < arr[i + 1])
		{
			currentSeq++;
		}
		else
		{
			currentSeq = 1;
		}
		if (currentSeq > highestSeq)
		{
			highestSeq = currentSeq;
		}
	}

	return highestSeq;
}
