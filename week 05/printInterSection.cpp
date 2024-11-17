#include <iostream>

const int MAX_SIZE = 100;

void printInterSection(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE],int size1, int size2)
{
	if (size1 <= 0 || size2 <= 0 || size1 > MAX_SIZE || size2 > MAX_SIZE)
	{
		return;
	}

	for (int i = 0; i < size1; ++i)
	{
		for (int j = 0; j < size2; ++j)
		{
			if (arr1[i] == arr2[j])
			{
				std::cout << arr1[i] << " ";
			}
		}
	}
}
