#include <iostream>

const int MAX_SIZE = 100;

bool isSubArray(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE],int size1, int size2)
{
	bool hasMetElement = false;
	for (int i = 0; i < size2; ++i)
	{
		for (int j = 0; j < size1; ++j)
		{
			if (arr2[i] == arr1[j])
			{
				hasMetElement = true;
			}
		}
		if (!hasMetElement)
		{
			return false;
		}
		hasMetElement = false;
	}

	return true;
}
