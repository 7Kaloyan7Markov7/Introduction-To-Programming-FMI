#include <iostream>

const int MAX_SIZE = 100000;

void fillRes(const int arr[],int* res ,size_t size,int& index,int subSetNum)
{
	for (int i = 0; i < size; ++i)
	{
		if ((subSetNum >> i) & 1)
		{
			res[index] = arr[i];
			index++;
		}
	}
}

int* findSets(const int arr[], size_t N)
{
	int* res = new int[MAX_SIZE];
	int subSetCount = (1 << N);
	int resIndex = 0;

	for (int i = 0; i < subSetCount; ++i)
	{
		fillRes(arr, res, N, resIndex, i);
		res[resIndex++] = 0;
	}

	return res;
}
