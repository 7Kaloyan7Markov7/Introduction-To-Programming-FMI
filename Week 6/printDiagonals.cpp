#include <iostream>

const int MAX_SIZE = 100;

void printDiagonals(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << matrix[i][i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << matrix[i][n - i - 1] << " ";
	}
}
