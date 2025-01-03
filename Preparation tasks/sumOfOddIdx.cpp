#include <iostream>

int getSumOddIdx(int* arr, int size)
{
	if (!arr) return -1;

	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		if (i % 2) sum += arr[i];
	}
	return sum;
}

int main()
{
	int n = 0;
	std::cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}

	std::cout << getSumOddIdx(arr, n);

	delete[] arr;
	return 0;
}
