#include <iostream>

const int MAX_SIZE = 30;

bool isTriangular(const int matrix[MAX_SIZE][MAX_SIZE], int size)
{
	for (int i = 1; i < size; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (matrix[size - i + j][j] != 0)
				return false;
		}
	}

	return true;
}
