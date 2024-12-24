#include <iostream>

void fillArr(int* arr, int size)
{
	if (!arr) return;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

void fillArr(bool* arr, int size)
{
	if (!arr) return;

	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

int getOnesCount(bool* arr, int size)
{
	if (!arr) return 0;

	int counter = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i]) counter++;
	}
	return counter;
}

void copyNonZeros(bool* boolArr, int* arr, int* res, int size)
{
	int index = 0;
	for (int i = 0; i < size; ++i)
	{
		if (boolArr[i])
		{
			res[index++] = arr[i];
		}
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (n <= 0)
	{
		std::cout << "n must be positive integer";
		return -1;
	}

	int* arr = new int[n];
	bool* boolArr = new bool[n];

	fillArr(arr, n);
	fillArr(boolArr, n);

	int resSize = getOnesCount(boolArr, n);
	if (!resSize) return 0;

	int* res = new int[resSize];
	copyNonZeros(boolArr, arr, res, n);

	for (int i = 0; i < resSize; ++i)
	{
		std::cout << res[i] << " ";
	}

	delete[] arr;
	delete[] boolArr;
	delete[] res;
	return 0;
}
