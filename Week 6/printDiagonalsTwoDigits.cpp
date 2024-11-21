#include <iostream>

const int MAX_SIZE = 30;
const int MAX_HIST_SIZE = 10;

bool hasTwoSameDigits(int num)
{
	int hist[MAX_HIST_SIZE] = {};
	int digitCount = 0;
	while (num != 0)
	{
		hist[num % 10]++;
		num /= 10;
	}

	for (int i = 0; i < MAX_HIST_SIZE; ++i)
	{
		if (hist[i] >= 2)
		{
			return true;
		}
	}
	return false;
}

void printDiagonals(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 1; i < n + 1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if(hasTwoSameDigits(matrix[n - i + j][j]))
			std::cout << matrix[n - i + j][j] << " ";
		}
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			if (hasTwoSameDigits(matrix[j][i + j]))
			std::cout << matrix[j][i + j] << " ";
		}
	}
}
