#include <iostream>

unsigned int getWordsCount(const char* words)
{
	if (!words) return 0;

	int index = 0;
	unsigned int countOfWords = 0;
	bool inWord = false;

	while (words[index] != '\0')
	{
		if ((words[index] >= 'A' && words[index] <= 'Z') || (words[index] >= 'a' && words[index] <= 'z'))
		{
			inWord = true;
		}
		else
		{
			if (inWord) countOfWords++;
			inWord = false;
		}
		index++;
	}
	if (inWord) countOfWords++;

	return countOfWords;
}
