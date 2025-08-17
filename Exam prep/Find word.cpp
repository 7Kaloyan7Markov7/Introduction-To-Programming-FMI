#include <iostream>

size_t strLen(const char* str)
{
	if (!str) return 0;

	size_t index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	
	return index;
}


bool searchRows(const char* const* grid, size_t rows, size_t cols, const char* word, size_t wordLen)
{
	if (wordLen > cols) return false;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j <= cols - wordLen; ++j)
		{
			size_t k = 0;
			while (k < wordLen && grid[i][j + k] == word[k])
			{
				k++;
			}
			if (k == wordLen) return true;
		}
	}

	return false;
}

bool searchCols(const char* const* grid, size_t rows, size_t cols, const char* word, size_t wordLen)
{
	if (wordLen > rows) return false;

	for (int i = 0; i < cols; ++i)
	{
		for (int j = 0; j <= rows - wordLen; ++j)
		{
			size_t k = 0;
			while (k < wordLen && grid[j + k][i] == word[k])
			{
				k++;
			}
			if (k == wordLen) return true;
		}
	}

	return false;
}

bool findWord(const char* const* grid, size_t M, size_t N, const char* word)
{
	if (!grid || !word) return false;

	size_t wordLen = strLen(word);

	return searchRows(grid, M, N, word, wordLen)
		|| searchCols(grid, M, N, word, wordLen);
}



int main()
{
	int n = 0;
	int m = 0;
	std::cin >> n >> m;

	char** grid = new char* [n];
	for (int i = 0; i < n; ++i)
	{
		grid[i] = new char[m];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> grid[i][j];
		}
	}

	std::cout << findWord(grid,3,3,"wow");


	for (int i = 0; i < n; ++i)
	{
		delete[] grid[i];
	}
	delete[] grid;

	return 0;
}
