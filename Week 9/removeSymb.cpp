#include <iostream>

void removeSymb(const char* text, char* result, char symbol)
{
	int index = 0;
	int resIndex = 0;

	while (text[index] != '\0')
	{
		if (text[index] != symbol)
			result[resIndex++] = text[index];
		index++;
	}
}
