#include <iostream>

int strLen(const char* str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
				
	return index;
}

void sortCharacters(const char* str, char* result)
{
	if (!str || !result) return;

	int resIndex = 0;
	int size = strLen(str);

	for (int i = 0; i < size; ++i)
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			result[resIndex++] = str[i];
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			result[resIndex++] = str[i] + ('a' - 'A');
	}
	result[resIndex] = '\0';

	int size2 = resIndex;
	for (int i = 0; i < size2 - 1; ++i)
	{
		for (int j = 0; j < size2 - i - 1; ++j)
		{
			if (result[j] > result[j + 1])
			{
				char temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}
}
