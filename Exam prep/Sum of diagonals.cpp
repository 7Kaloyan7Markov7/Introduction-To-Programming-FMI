#include <iostream>

double calculateMatrix(int** matr, int m)
{
	int sum = 0;
	for (int i = 0; i < m; ++i)
	{
		sum += matr[i][i];
	}

	for (int i = 0; i < m; ++i)
	{
		sum += matr[i][m - i - 1];
	}
	if (m % 2) sum -= matr[m / 2][m / 2];
	return sum;
}
