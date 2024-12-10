#include <iostream>

void swapLetterHeight(char str[])
{
	int index = 0;
	int dif = 'a' - 'A';

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= dif;
		else if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += dif;
		index++;
	}
}
