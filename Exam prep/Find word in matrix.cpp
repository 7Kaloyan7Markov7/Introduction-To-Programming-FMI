#include <iostream>

const int FIRST = 0;

int strLen(const char* word)
{
	int index = 0;
	while (word[index] != '\0')
	{
		index++;
	}

	return index;
}

bool findWord(char grid[5][5], int M, int N, const char* word)
{
	if (!word) return false;
	if (!grid) return false;

	int wordLen = strLen(word);

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (grid[i][j] == word[FIRST])
			{
				int index = 0;
				int counter = 0;

				while (j + index < N && grid[i][j + index] == word[FIRST + index])
				{
					index++;
					counter++;
					if (counter == wordLen) return true;
				}

				counter = 0;
				index = 0;

				while (j - index >= 0 && grid[i][j - index] == word[FIRST + index])
				{
					index++;
					counter++;
					if (counter == wordLen) return true;
				}

				counter = 0;
				index = 0;

				while (i + index < M && grid[i + index][j] == word[FIRST + index])
				{
					index++;
					counter++;
					if (counter == wordLen) return true;
				}

				counter = 0;
				index = 0;

				while (i - index >= 0 && grid[i - index][j] == word[FIRST + index])
				{
					index++;
					counter++;
					if (counter == wordLen) return true;
				}

			}
		}
	}

	return false;
}
