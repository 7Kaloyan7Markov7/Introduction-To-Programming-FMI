#include <iostream>

int strLen(char* str)
{
	int index = 0;
	int len = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			len++;
		}
		index++;
	}

	return len;
}

char* getNewStr(char* str)
{
	if (!str) return nullptr;

	int resLen = strLen(str);
	char* res = new char[resLen + 1];

	int index = 0;
	int resIndex = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			res[resIndex] = str[index];
			resIndex++;
		}
		index++;
	}

	res[resIndex] = '\0';


	return res;
}
