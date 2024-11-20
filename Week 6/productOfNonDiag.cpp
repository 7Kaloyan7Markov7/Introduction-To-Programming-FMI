#include <iostream>

const int MAX_SIZE = 100;

//first solution
long long productOfNonDiag(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	long long product = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (matrix[i][j] != matrix[i][n - i - 1])
			{
				product *= matrix[i][j];
			}
		}
	}

	return product;;
}
//second solution

long long productOfNonDiag(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	long long product = 1;

	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			product *= matrix[i][n - j - 1];
			product *= matrix[j][n - i - 1];
		}
	}

	return product;;
}
