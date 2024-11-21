#include <iostream>

const int MAX_SIZE = 30;

void addMatrixes(int matrix[MAX_SIZE][MAX_SIZE],const int matrix2[MAX_SIZE][MAX_SIZE], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			matrix[i][j] = matrix[i][j] + matrix2[i][j];
		}
	}
}
