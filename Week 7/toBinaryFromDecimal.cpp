#include <iostream>

unsigned long long decimalToBinary(int n)
{
	long long temp = 1;
	long long result = 0;

	while (n != 0)
	{
		if (n % 2) result += temp;
		temp *= 10;
		n /= 2;
	}

	return result;
}
