#include <iostream>

const int MAX_SIZE = 30;

void revertMatrixToRight(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
	int temp = 0;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size / 2; ++j)
		{
			temp = matrix[i][j];
			matrix[i][j] = matrix[i][size - j - 1];
			matrix[i][size - j - 1] = temp;;
		}
	}
}
