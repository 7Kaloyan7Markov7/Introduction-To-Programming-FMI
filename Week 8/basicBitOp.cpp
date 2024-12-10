#include <iostream>

bool isEven(int n)
{
	return (!(n & 1));
}

unsigned int setBit(unsigned int n, unsigned int k)
{
	return n | (1 << k);
}

unsigned int clearBit(unsigned int n, unsigned int k)
{
	return n & ~(1 << k);
}

unsigned int toggleBit(unsigned int n, unsigned int k)
{
	if (!(n & (1 << k))) return n | (1 << k);
	else return n & ~(1 << k);
}

bool checkBit(unsigned int n, unsigned int k)
{
	return ((n >> k) & 1);
}
