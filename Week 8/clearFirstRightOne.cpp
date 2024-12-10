#include <iostream>

void clearBit(int& n, int k)
{
	n &= ~(1 << k);
}

void clearFirstRightOne(int& n)
{
	for (int i = 0; i < 8; ++i)
	{
		if ((n >> i) & 1)
		{
			clearBit(n, i);
			return;
		}
	}
}
