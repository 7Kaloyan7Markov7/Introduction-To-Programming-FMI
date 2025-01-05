#include <iostream>

int* merge(int* arr1, int* arr2, int size1, int size2)
{
	int resSize = size1 + size2;
	int* res = new int[resSize];
	int ptr1 = 0;
	int ptr2 = 0;
	int index = 0;

	while (ptr1 < size1 && ptr2 < size2)
	{
		if (arr1[ptr1] <= arr2[ptr2])
		{
			res[index++] = arr1[ptr1++];
		}
		else
		{
			res[index++] = arr1[ptr1++];
		}
	}

	while (ptr1 < size1)
	{
		res[index++] = arr1[ptr1];
	}

	while (ptr2 < size2)
	{
		res[index++] = arr2[ptr2++];
	}

	for (int i = 0; i < resSize; ++i)
	{
		std::cout << res[i] << " ";
	}

	return res;
}
