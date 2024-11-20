#include <iostream>

const int MAX_SIZE = 100;

bool isMatrixSymmetric(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (matrix[i][j] != matrix[j][i])
			{
				return false;
			}
		}
	}
	return true;
}
