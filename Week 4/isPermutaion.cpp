#include <iostream>

bool isPermutation(int a, int b)
{
	int sum = 0;
	int sum2 = 0;
	int digitCount = 0;
	int digitCount2 = 0;

	while (a != 0)
	{
		sum += (a % 10);
		digitCount += 1;
		a /= 10;
	}

	while (b != 0)
	{
		sum2 += (b % 10);
		digitCount2 += 1;
		b /= 10;
	}

	return (sum == sum2 && digitCount == digitCount2);
}
