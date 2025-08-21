#pragma once
//FN: 4MI0600392, Kaloyan Markov

size_t digitCount(long num)
{
	if (!num) return 1;

	size_t counter = 0;
	while (num)
	{
		counter++;
		num /= 10;
	}

	return counter;
}

void fillArr(int* arr, size_t size, long num)
{
	for (int i = size - 1; i >= 0; --i)
	{
		arr[i] = num % 10;
		num /= 10;
	}
}

void getHighestSeq(const int* arr, size_t size, size_t& beg, size_t& end)
{
	if (!arr) return;

	int highestSeq = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		int index = 0;
		while (index + i + 1 < size && arr[i + index] > arr[i + index + 1] &&
			arr[i + index] == arr[i + index + 1] + 1)
		{
			index++;
		}
		if (index > highestSeq)
		{
			beg = i;
			end = i + index;
			highestSeq = index;
		}
	}
}

long processNum(long num)
{
	num = num < 0 ? -num : num;
	size_t digits = digitCount(num);
	if (digits < 5) return -1;

	int* arr = new int[digits];
	fillArr(arr, digits, num);

	long res = 0;
	size_t beg = 0;
	size_t end = 0;

	getHighestSeq(arr, digits, beg, end);

	for (int i = 0; i < end - beg + 1; ++i)
	{
		res *= 10;
		res += arr[beg + i];
	}

	delete[] arr;
	return res;
}

int* mergeArrays(int arr1[], int arr2[], int m)
{
	if (!arr1 || !arr2) return nullptr;
	if (m <= 0) return nullptr;

	int* res = new int[m];
	for (int i = 0; i < m; ++i)
	{
		res[i] = arr1[i] + arr2[m - i - 1];
	}

	return res;
}

struct Point
{
	double x;
	double y;
};

int CheckQ(Point p)
{
	if (p.x > 0 && p.y > 0) return 1;
	if (p.x > 0 && p.y < 0) return 4;
	if (p.x < 0 && p.y < 0) return 3;
	if (p.x < 0 && p.y > 0) return 2;

	if (p.x > 0 && p.y == 0) return 1;
	if (p.x == 0 && p.y < 0) return 3;
	if (p.x < 0 && p.y == 0) return 2;
	if (p.x == 0 && p.y > 0) return 1;

	return 0;
}
