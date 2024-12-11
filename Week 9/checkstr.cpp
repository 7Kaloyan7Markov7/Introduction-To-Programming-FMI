#include <iostream>

int strLen(const char* str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

bool checkstr(const char* str)
{
	if (strLen(str) == 0 || strLen(str) == 1) return false;
	int index = 0;

	while (str[index + 1] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z') && (str[index + 1] >= 'a' && str[index + 1] <= 'z') ||
			(str[index] >= 'A' && str[index] <= 'Z') && (str[index + 1] >= 'A' && str[index + 1] <= 'Z'))
			return false;
		if ((str[index] < 'a' || str[index] > 'z') && (str[index] < 'A' || str[index] > 'Z'))
			return false;
		index++;
	}
	return true;
}
