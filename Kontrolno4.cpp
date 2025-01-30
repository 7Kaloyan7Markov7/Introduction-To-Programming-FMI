#include <iostream>

const int MAX_SIZE = 1000000000;

int getSize(int N)
{
	int counter = 0;

	while (N != 0)
	{
		counter++;
		N /= 10;
	}
	return counter;
}

void fillArr(int* arr, int N, int size)
{
	if (!arr) return; //nullptr
	for (int i = size; i != 0; --i)
	{
		arr[i - 1] = N % 10;
		N /= 10;
	}
}

int solution(int N,int n)
{
	if (n > 8 || n <= 0) return -1;
	if (N > MAX_SIZE || N < 0) return -1;
	if (!N) return 0;

	int size = getSize(N);
	int* arr = new int[N];
	fillArr(arr, N, size);

	int highest = 0;
	int current = 0;

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i + j >= size)
			{
				delete[] arr;
				return highest;
			}
			current += arr[i + j];
		}
		if (current > highest)
		{
			highest = current;
		}
		current = 0;
	}

	delete[] arr;
	return highest;
}

int main()
{
	int N, n = 0;
	std::cin >> N >> n;

	std::cout << solution(N, n);

	return 0;
}
