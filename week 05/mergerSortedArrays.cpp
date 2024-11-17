#include <iostream>

const int MAX_SIZE = 100;

void mergeSortedArrays(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE], int result[2*MAX_SIZE],int size1,int size2)
{
	if (size1 > MAX_SIZE || size2 > MAX_SIZE || size1 <= 0 || size2 <= 0)
	{
		std::cout << "Invalid input";
		return;
	}
	
	int ptr1 = 0;
	int ptr2 = 0;
	int index = 0;


	while (ptr1 != size1 && ptr2 != size2)
	{
		if (arr1[ptr1] < arr2[ptr2])
		{
			result[index] = arr1[ptr1];
			ptr1++;
		}
		else
		{
			result[index] = arr2[ptr2];
			ptr2++;
		}
		index++;
	}
	
	while (ptr2 != size2)
	{
		result[index] = arr2[ptr2];
		index++;
		ptr2++;
	}

	while (ptr1 != size1)
	{
		result[index] = arr1[ptr1];
		index++;
		ptr1++;
	}
}
