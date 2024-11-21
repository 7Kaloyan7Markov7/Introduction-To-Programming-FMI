#include <iostream>

const int MAX_SIZE = 30;

void multiplyMatrixWithK(int matrix[MAX_SIZE][MAX_SIZE], int size, int k)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			matrix[i][j] = matrix[i][j] * k;
		}
	}
}
