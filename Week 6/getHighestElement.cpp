#include <iostream>

const int MAX_SIZE = 100;

int getHighestFromMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	int highest = matrix[0][0];

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] > highest)
			{
				highest = matrix[i][j];
			}
		}
	}

	return highest;
}
