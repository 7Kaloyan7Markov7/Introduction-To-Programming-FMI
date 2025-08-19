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

bool isPalyndrom(const char* str, char symb1, char symb2, size_t len)
{
	int arr[256] = {};

	size_t countOfOdds = 0;
	size_t countOfEvens = 0;

	for (int i = 0; i < len; ++i)
	{
		if (str[i] == symb1 || str[i] == symb2) continue;
		
		arr[str[i]]++;
	}

	for (int i = 0; i < 256; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			countOfOdds++;
		}
		else
		{
			countOfEvens++;
		}
	}

	if ((len - 2) % 2 == 1 && countOfOdds != 1) return false;
	if ((len - 2) % 2 == 0 && countOfOdds != 0) return false;

	return true;
}

bool checkStr(const char* str)
{
	if (!str) return false;
	size_t len = strLen(str);
	

	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			if (i == j) continue;
			if (isPalyndrom(str, str[i], str[j], len))
			{
				return true;
			}
		}
	}
	
	return false;
}



int main()
{
	const char str[] = "abcd";

	std::cout << checkStr(str);

	return 0;
}
