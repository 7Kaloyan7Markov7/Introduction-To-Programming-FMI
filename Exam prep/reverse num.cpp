#include <iostream>

void ConvertNum(long& num)
{
	if (num < 0) return;
	long newNum = 0;

	while (num != 0)
	{
		newNum += num % 10;
		if(num >= 10) newNum *= 10;

		num /= 10;
	}

	num = newNum;
}
