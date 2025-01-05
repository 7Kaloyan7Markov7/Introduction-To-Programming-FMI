#include <iostream>

bool isDiv(int prev, int current, int next)
{
	if (!(current % prev) || !(current % next)) return true;
	return false;
}

int numOfElements(int* arr, int size)
{
	if (size == 1 || size == 0) return 0;
	int counter = 0;

	if (!(arr[0] % arr[1])) counter++;
	if (!(arr[size - 1] % arr[size - 2])) counter++;

	for (int i = 1; i < size - 1; ++i)
	{
		if (isDiv(arr[i - 1], arr[i], arr[i + 1]))
		{
			counter++;
		}
	}
	return counter;
}

void fillArr(const int* arr,int* res, int size)
{
	int resIndex = 0;
	if (!(arr[0] % arr[1]))
	{
		res[resIndex] = arr[0];
		resIndex++;
	}

	for (int i = 1; i < size - 1; ++i)
	{
		if (isDiv(arr[i - 1], arr[i], arr[i + 1]))
		{
			res[resIndex] = arr[i];
			resIndex++;
		}
	}

	if (!(arr[size - 1] % arr[size - 2])) 
		res[resIndex] = arr[size - 1];
}

int* getArr(int* arr, int size)
{
	if (!arr) return nullptr;

	int newSize = numOfElements(arr, size);
	int* newArr = new int[newSize];

	fillArr(arr, newArr, size);

	return newArr;
}
