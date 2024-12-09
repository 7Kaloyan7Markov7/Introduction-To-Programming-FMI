#include <iostream>

void printSubSet(const int arr[], int size, int subSetNum)
{
	std::cout << "[";
	for (int i = 0; i < size; ++i)
	{
		if ((subSetNum >> i) & 1)
		{
			std::cout << arr[i] << " ";
		}
	}
	if(subSetNum) std::cout << "\b";
	std::cout << "]";
}

void printSubSets(const int arr[],int size)
{
	uint32_t subSetCount = 1 << size;

	for (int i = 0; i < subSetCount; ++i)
	{
		printSubSet(arr, size, i);
		std::cout << " ";
	}
}
