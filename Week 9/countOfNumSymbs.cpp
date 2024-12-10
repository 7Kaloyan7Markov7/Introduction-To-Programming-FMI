#include <iostream>

char numToSymb(int num)
{
	if (num >= 0 && num <= 9)
		return num + '0';
}

void countOfNumSymbs(const char str[], char result[])
{
	int index = 0;
	int hist[10] = {};
	
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
			hist[str[index] - '0']++;
		else
		{
			std::cout << "Invalid input";
			return;
		}
		index++;
	}
	int resIndex = 0;

	for (int i = 0; i < 10; ++i)
	{
		if (!hist[i]) continue;
		
		result[resIndex++] = numToSymb(hist[i]);
		result[resIndex++] = 'x';
		result[resIndex++] = numToSymb(i);
		result[resIndex++] = ',';
	}
	result[resIndex - 1] = '\0';
}
