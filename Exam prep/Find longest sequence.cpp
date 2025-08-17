#include <iostream>

size_t strLen(const char* str)
{
	if (!str) return 0;
	size_t index = 0;

	while (str[index] != '\0') index++;

	return index;
}

long findSeq(const char* arr, char S)
{
	if (!arr) return -1;

	long longestSeq = 0;
	size_t len = strLen(arr);

	for (int i = 0; i < len; ++i)
	{
		long index = 0;
		while (i + index < len && arr[i + index] == S)
		{
			index++;
		}
		if (index > longestSeq) longestSeq = index;
	}

	return longestSeq;
}

int main()
{

	std::cout << findSeq("abcaadddd", 'a');
	return 0;
}
