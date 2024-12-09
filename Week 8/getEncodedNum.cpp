#include <iostream>

int getCountOfBits(int n)
{
	if (!n) return 1;
	int counter = 0;
	while (n > 0)
	{
		counter++;
		n >>= 1;
	}
	return counter;
}

long long getEncodedNum(int n)
{
	int size = getCountOfBits(n);
	long long mask = 1;
	long long res = 0;

	for (int i = 0; i < size; ++i)
	{
		if ((n >> i) & 1) res |= mask << 2 * i + 1;
		else res |= mask << 2 * i;
	}
	return res;
}
