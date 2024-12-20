#include <iostream>

void fillArrays(int* arr, int size)
{
	if (!arr) return;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

int divisibleByK(int* arr, int k, int size)
{
	if (!arr) return;
	int counter = 0;
	for (int i = 0; i < size; ++i)
	{
		if (!(arr[i] % k)) counter++;
	}
	return counter;
}

void fillRes(int* result, int* arr1, int* arr2, int size1, int size2, int k)
{
	if (!result || !arr1 || !arr2) return;
	int resIndex = 0;
	for (int i = 0; i < size1; ++i)
	{
		if (!(arr1[i] % k))
		{
			result[resIndex++] = arr1[i];
		}
	}

	for (int i = 0; i < size2; ++i)
	{
		if (!(arr2[i] % k))
		{
			result[resIndex++] = arr2[i];
		}
	}
}

void printRes(int* res, int size)
{
	if (!res) return;
	for (int i = 0; i < size; ++i) 
	{
		std::cout << res[i] << " ";
	}
}

bool isValidInputSize(int size1, int size2)
{
	return (size1 >= 0 && size2 >= 0);
}

int main()
{
	int size1, size2 = 0;
	std::cin >> size1 >> size2;
	if (isValidInputSize(size1, size2))
	{
		std::cout << "Invalid sizes";
		return -1;
	}

	int* arr1 = new int[size1];
	int* arr2 = new int[size2];
	
	fillArrays(arr1, size1);
	fillArrays(arr2, size2);

	int k = 0;
	std::cin >> k;
	if (k <= 0)
	{
		delete[] arr1;
		delete[] arr2;
		std::cout << "k must be positive";
		return -1;
	}

	int size = divisibleByK(arr1, k, size1) + divisibleByK(arr2, k, size2);

	int* result = new int[size];
	fillRes(result, arr1, arr2, size1, size2, k);
	printRes(result, size);

	delete[] arr1;
	delete[] arr2;
	delete[] result;
	return 0;
}
