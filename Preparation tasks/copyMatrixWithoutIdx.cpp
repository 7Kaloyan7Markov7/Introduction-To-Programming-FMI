#include <iostream>

int** createDynamicMatrix(int rows, int cols)
{
	if (!rows || !cols) return nullptr;

	int** matrix = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		matrix[i] = new int[cols];
	}
	return matrix;
}

void fillMatrix(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printMatrix(const int* const* matrix, int rows, int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void copyMatrix(const int* const* source, int** dest, int rows, int cols, int index)
{
	int idx = 0;
	for (int i = 0; i < rows; ++i)
	{
		if (i == index) continue;
		for (int j = 0; j < cols; ++j)
		{
			dest[idx][j] = source[i][j];
		}
		idx++;
	}
}

int** getModifiedMatrix(const int* const* matrix, int rows, int cols, int index)
{
	if (rows == 1) return nullptr;

	int** modMatrix = createDynamicMatrix(rows - 1, cols);
	copyMatrix(matrix, modMatrix, rows, cols, index);
	return modMatrix;
}

void deleteMatrix(int** matrix, int rows)
{
	if (!matrix) return;
	for (int i = 0; i < rows; ++i)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}

void program()
{
	int rows, cols, index = 0;
	std::cin >> rows >> cols;
	if (rows <= 0 || cols <= 0)
	{
		std::cout << "Rows and collumns";
		return;
	}
	std::cin >> index;
	if (index < 0 || index >= rows)
	{
		std::cout << "Invalid index";
		return;
	}

	int** matrix = createDynamicMatrix(rows, cols);
	fillMatrix(matrix, rows, cols);

	int** resMatrix = getModifiedMatrix(matrix, rows, cols, index);
	printMatrix(resMatrix, rows, cols);

	deleteMatrix(matrix, rows);
	deleteMatrix(resMatrix, rows - 1);
}

int main()
{
	program();

	return 0;
}
