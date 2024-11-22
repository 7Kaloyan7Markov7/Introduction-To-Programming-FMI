#include <iostream>
const int MAX_SIZE = 6;

bool isHighestInRow(const int arr[MAX_SIZE], int currentDigit)
{
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		if (currentDigit < arr[i])
		{
			return false;
		}
	}
	return true;
}

bool isLowestInCol(const int matrix[MAX_SIZE][MAX_SIZE], int currentDigit, int currentCol)
{
	for (int i = 0; i < MAX_SIZE; ++i)
	{
		if (currentDigit > matrix[i][currentCol])
		{
			return false;
		}
	}

	return true;
}

void printCoordinatesOfSaddle(const int matrix[MAX_SIZE][MAX_SIZE])
{
	bool hasPrinted = false;

	for (int i = 0; i < MAX_SIZE; ++i)
	{
		for (int j = 0; j < MAX_SIZE; ++j)
		{
			if (isHighestInRow(matrix[i], matrix[i][j]) && isLowestInCol(matrix, matrix[i][j], j))
			{
				hasPrinted = true;
				std::cout << i + 1 << " " << j + 1;
				return;
			}
		}
	}

	if (!hasPrinted)
	{
		std::cout << "Has no Saddle";
	}
}

int main()
{
	int matrix[MAX_SIZE][MAX_SIZE] = {};

	for (int i = 0; i < MAX_SIZE; ++i)
	{
		for (int j = 0; j < MAX_SIZE; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
	
	printCoordinatesOfSaddle(matrix);
}
