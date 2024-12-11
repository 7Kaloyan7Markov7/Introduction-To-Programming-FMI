#include <iostream>

int getPowered(int n, int power)
{
	int result = 1;
	for (int i = 0; i < power; ++i)
	{
		result *= n;
	}
	return result;
}

int countOfDigits(int num)
{
	if (!num) return 1;
	int counter = 0;

	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

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
		if (str[index] < '0' || str[index] > '9')
		{
			std::cout << "Invalid input";
			return;
		}
		hist[str[index++] - '0']++;
	}

	int resIndex = 0;

	for (int i = 0; i < 10; ++i)
	{
		if (!hist[i]) continue;
		int digitCount = countOfDigits(hist[i]);

		if(hist[i] < 10)
		result[resIndex++] = numToSymb(hist[i]);

		if(hist[i] >= 10)
		for (int j = 0; j < digitCount; ++j)
		{
			int extractor = getPowered(10, digitCount - j - 1);
			result[resIndex++] = numToSymb(hist[i] / extractor);
			hist[i] %= extractor;
		}

		result[resIndex++] = 'x';
		result[resIndex++] = numToSymb(i);
		result[resIndex++] = ',';
	}
	result[resIndex - 1] = '\0';
}
