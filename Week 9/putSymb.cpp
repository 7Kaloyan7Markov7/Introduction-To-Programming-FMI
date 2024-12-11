#include <iostream>

void putSymb(const char* text, char* result, char symb, int index)
{
	int iter = 0;
	int resIter = 0;
	while (text[iter] != '\0')
	{
		if (iter == index)
		{
			result[resIter++] = symb;
		}
		result[resIter++] = text[iter++];
	}
	result[iter + 1] = '\0';
}
