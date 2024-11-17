#include <iostream>

const int MAX_SIZE = 100;

bool checkForUniqueElements(const int arr[MAX_SIZE], int size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		std::cout << "Invalid input";
		return false;
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (j == i)
			{
				continue;
			}
			if (arr[i] == arr[j])
			{
				return false;
			}
		}
	}

	return true;
}
