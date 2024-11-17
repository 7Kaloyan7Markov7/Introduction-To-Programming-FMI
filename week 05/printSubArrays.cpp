#include <iostream>

const int MAX_SIZE = 100;

void printSubArrays(const int arr[MAX_SIZE], int size, int k)
{
	if (size > MAX_SIZE || size <= 0 || k <= 0)
	{
		std::cout << "Invalid input";
		return;
	}

	for (int i = 0; i < size - k + 1; ++i)
	{
		for (int j = i; j < k + i; ++j)
		{
			std::cout << arr[j] << " ";
		}
		std::cout << std::endl;
	}
}
