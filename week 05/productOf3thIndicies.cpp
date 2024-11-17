#include <iostream>

const int MAX_SIZE = 100;

int getProductOfArray(int arr[MAX_SIZE], int size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		return 0; 
	}

	int product = 1;
	bool hasValidElement = false;

	for (int i = 0; i < size; ++i)
	{
		if (i % 3 == 0)
		{
			product *= arr[i];
			hasValidElement = true;
		}
	}

	if (!hasValidElement)
	{
		return 0;	
	}

	return product;
}
