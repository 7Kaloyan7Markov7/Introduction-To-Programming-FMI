#include <iostream>
//Калоян Марков?

const int MAX_ASCII_SIZE = 256;

void getDifference(const char* string1, const char* string2, char* result)
{
	bool hist1[MAX_ASCII_SIZE] = {};
	bool hist2[MAX_ASCII_SIZE] = {};
	int index = 0;
	
	while (string1[index] != '\0')
	{
		hist1[string1[index]] = true;
		index++;
	}

	index = 0;

	while (string2[index] != '\0')
	{
		hist2[string2[index]] = true;
		index++;
	}
	index = 0;

	for (int i = 0; i < MAX_ASCII_SIZE; ++i)
	{	
		if (hist1[i] != hist2[i])
			result[index++] = (char)i;
	}
	result[index] = '\0';
}
