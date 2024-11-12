#include <iostream>

int getReversedNum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int result = 0;

	while (n != 0)
	{
		result += n % 10;
		if (n >= 10)
		{
			result *= 10;
		}
		n /= 10;
	}

	return result;
}
