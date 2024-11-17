#include <iostream>

const int MAX_SIZE = 100;

void reverseArray(int arr[MAX_SIZE], int size, int N)
{
	if (size <= 0 || size > MAX_SIZE || N < 0)
	{
		std::cout << "Invalid Input";
		return;
	}
	
	for (int i = 0; i < N / 2; ++i)
	{
		int temp = arr[i];
		arr[i] = arr[N - i - 1];
		arr[N - i - 1] = temp;
	}
}
