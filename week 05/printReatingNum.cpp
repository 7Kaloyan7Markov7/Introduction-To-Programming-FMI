#include <iostream>

const int MAX_SIZE = 100;

void firstRepeatedNum(const int arr[MAX_SIZE], int size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		std::cout << "Invalid  input";
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[i] == arr[j])
			{
				std::cout << arr[i];
				return;
			}
		}
	}

	std::cout << "Does not have repeating numbers";
}
