#include <iostream>

int strLen(const char* str)
{
	int index = 0;
	while (str[index] != '\0') index++;
	return index;
} 

void reverse(char* str, int size)
{
	for (int i = 0; i < size/2; ++i)
	{
		char temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
	}
}

bool doExist(char* symbols, char* word)
{
	int wordSize = strLen(word);
	int symbolSize = strLen(symbols);

	if (wordSize > symbolSize) return -1;

	reverse(word,wordSize);
	int j = 0;

	for (int i = 0; i < symbolSize; ++i)
	{
		while (symbols[i + j] == word[j] && j < wordSize)
		{
			j++;
		}
		if (j == wordSize) return true;
		j = 0;
	}
	return false;
}
