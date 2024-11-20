#include <iostream>

const int MAX_SIZE = 100;

bool fixedElement(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (matrix[i][j] == i * j)
				return true;
		}
	}
	return false;
}
