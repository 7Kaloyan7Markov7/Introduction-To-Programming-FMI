#include <iostream>

void fillArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

int getCount(int* arr, int size)
{
	int counter = 0;
	for (int i = 1; i < size - 1; ++i)
	{
		if (arr[i] >= arr[i + 1] || arr[i] >= arr[i - 1]) counter++;
	}
	if (arr[0] >= arr[1]) counter++;
	if (arr[size - 1] >= arr[size - 2]) counter++;
	return counter;
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
}

void fillRes(int* res,int* arr, int size)
{
	int index = 0;
	if (arr[0] >= arr[1]) res[index++] = arr[0];
	for (int i = 1; i < size - 1; ++i)
	{
		if (arr[i] >= arr[i - 1] || arr[i] >= arr[i + 1]) res[index++] = arr[i];
	}
	if (arr[size - 1] >= arr[size - 2]) res[index++] = arr[size - 1];
}

int main()
{
	int n = 0;
	std::cin >> n;

	int* arr = new int[n];
	fillArray(arr, n);
	
	int resSize = getCount(arr, n);
	if (!resSize)
	{
		printArray(arr, n);
		return 0;
	}

	int* res = new int[resSize];
	fillRes(res, arr, n);

	printArray(res, resSize);
	

	delete[] res;
	delete[] arr;
	return 0;
}
