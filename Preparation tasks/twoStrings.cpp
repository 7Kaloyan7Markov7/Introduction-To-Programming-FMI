#include <iostream>

void getSizes(int& cap, int& small,const char* str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			small++;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
		{
			cap++;
		}
		index++;
	}
}

void fillCaps(const char* str, char* res)
{
	int index = 0;
	int resIndex = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			res[resIndex] = str[index];
			resIndex++;
		}
		index++;
	}
	res[resIndex] = '\0';
}

void fillSmall(const char* str, char* res)
{
	int index = 0;
	int resIndex = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			res[resIndex] = str[index];
			resIndex++;
		}
		index++;
	}
	res[resIndex] = '\0';
}

void strings(const char* str, char*& cap, char*& small)
{
	int countOfCapitals = 0;
	int countOfSmall = 0;
	getSizes(countOfCapitals, countOfSmall, str);

	cap = new char[countOfCapitals + 1];
	small = new char[countOfSmall + 1];

	fillCaps(str, cap);
	fillSmall(str, small);
}
