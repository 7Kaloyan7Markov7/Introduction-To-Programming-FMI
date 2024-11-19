#include <iostream>

const int MAX_SIZE = 100;

void printSumOfRows(const int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols)
{
	int sum = 0;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			sum += matrix[i][j];
		}
		std::cout << sum << std::endl;
		sum = 0;
	}
}
