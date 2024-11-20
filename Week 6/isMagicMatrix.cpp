#include <iostream>

const int MAX_SIZE = 100;

bool isMagicMatrix(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	int diagonal1Sum = 0;
	int diagonal2Sum = 0;
	int currentRowSum = 0;
	int currentColSum = 0;

	for (int i = 0; i < n; ++i)
	{
		diagonal1Sum += matrix[i][i];
		diagonal2Sum += matrix[i][n - i - 1];
	}
	if (diagonal1Sum != diagonal2Sum)
		return false;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			currentRowSum += matrix[i][j];
			currentColSum += matrix[j][i];
		}
		if (currentColSum != currentRowSum || currentColSum != diagonal1Sum || currentRowSum != diagonal1Sum)
		{
			return false;
		}
		currentColSum = 0;
		currentRowSum = 0;
	}

	return true;
}
