#include <iostream>

int strLen(const char str[])
{
	int index = 0;
	while (str[index] != '\0') index++;

	return index;
}

char* CheckStr(char str[])
{
	int size = strLen(str);
	if (size <= 0) return nullptr;

	int resIndex = 0;
	char* res = new char[size];

	int hist[256] = {};
	for (int i = 0; i < size; ++i)
	{
		hist[str[i]]++;
	}

	for (int i = 0; i < 256; ++i)
	{
		while (hist[i] > 1)
		{
			res[resIndex++] = (char)i;
			hist[i]--;
		}
	}

	res[resIndex] = '\0';
	std::cout << res;
	return res;
}
