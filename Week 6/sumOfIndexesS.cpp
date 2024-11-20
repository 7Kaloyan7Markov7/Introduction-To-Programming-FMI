#include <iostream>

const int MAX_SIZE = 100;

int sumOfIndexesS(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int s)
{
	int sum = 0;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < rows; ++j)
		{
			if (s == i + j)
			{
				sum += matrix[i][j];
			}
				
		}
	}
	return sum;
}
