#include <iostream>

const int MAX_SIZE = 100;

bool hasPrimeNum(const int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (matrix[i][j] == 0 || matrix[i][j] == 1)  continue;
			bool isPrime = true;

			for (int k = 2; k < matrix[i][j]; ++k)
			{
				if (matrix[i][j] % k == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime)
			{
				return true;
			}
		}
	}
	return false;
}
