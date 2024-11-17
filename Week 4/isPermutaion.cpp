#include <iostream>

bool isPermutation(int a, int b)
{
	int digitCount1 = 0;
	int digitCount2 = 0;
	int temp1 = a;
	int temp2 = b;
	int currentDigit1 = 0;
	int currentDigit2 = 0;

	while (temp1 != 0)
	{
		digitCount1 += 1;
		temp1 /= 10;
	}

	while (temp2 != 0)
	{
		digitCount2 += 1;
		temp2 /= 10;
	}

	if (digitCount1 != digitCount2)
	{
		return false;
	}

	for (int i = 0; i < 10; ++i)
	{
		temp1 = a;
		temp2 = b;

		for (int j = 0; j < digitCount1; ++j)
		{
			if (i == temp1 % 10)
			{
				currentDigit1++;
			}
			if (i == temp2 % 10)
			{
				currentDigit2++;
			}
			temp1 /= 10;
			temp2 /= 10;
		}
		if (currentDigit1 != currentDigit2)
		{
			return false;
		}
		currentDigit1 = 0;
		currentDigit2 = 0;
	}

	return true;
}
