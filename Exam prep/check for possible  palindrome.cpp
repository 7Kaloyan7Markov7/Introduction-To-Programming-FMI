#include <iostream>

int strLength(char str[])
{
	int index = 0;
	while (str[index] != '\0') index++;

	return index;
}

int CheckStr(char str[]) 
{
	int size = strLength(str);
	if (size < 2) return -1;

	int hist[256] = {};
	for (int i = 0; i < size; ++i)
	{
		hist[str[i]]++;
	}

	int countOfOdds = 0;

	for (int i = 0; i < 256; ++i)
	{
		if (hist[i] % 2) countOfOdds++;
	}

	if (size % 2 && countOfOdds > 1 || size % 2 == 0 && countOfOdds > 0) return 0;
	return 1;
} 
