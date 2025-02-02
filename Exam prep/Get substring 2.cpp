#include <iostream>

int strLen(const char str[])
{
	int index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return index;
}

int getResSize(const char str[], int size, int& lastIndex)
{
	int counter = 0;
	int highest = 0;

	for (int i = 0; i < size; ++i)
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		{
			counter = 0; 
		}
		else
		{
			counter++;
		}
		if (highest <= counter)
		{
			highest = counter;
			lastIndex = i;
		}
	}
	return highest;
}

char* GetWord(char str[])
{
	int size = strLen(str);
	if (size < 1) return nullptr;

	int lastIndex = 0;
	int resSize = getResSize(str, size, lastIndex);
	
	char* res = new char[resSize + 1];

	for (int i = 0; i < resSize; ++i)
	{
		res[i] = str[lastIndex - resSize + 1 + i];
	}
	res[resSize] = '\0';

	return res;
}
