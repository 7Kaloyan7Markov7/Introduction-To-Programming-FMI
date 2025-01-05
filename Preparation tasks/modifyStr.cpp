#include <iostream>

int strLen(const char* str)
{
	int index = 0;
	while (str[index] != '\0')
		index++;

	return index;
}

void strCopy(const char* source, char* dest)
{
	int index = 0;
	while (source[index] != '\0')
	{
		dest[index] = source[index];
		index++;
	}
	dest[index] = '\0';
}

char* newString(const char* str, const int* arr, int arrSize, char S)
{
	if (!str || !arr) return nullptr;
	int len = strLen(str);
	char* res = new char[len + 1];

	strCopy(str, res);

	for (int i = 0; i < arrSize; ++i)
	{
		res[arr[i]] = S;
	}
	
	return res;
} 
