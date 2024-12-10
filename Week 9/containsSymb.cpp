#include <iostream>

bool containsSymb(const char str[], char symb)
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == symb) return true;
		index++;
	}
	return false;
}
