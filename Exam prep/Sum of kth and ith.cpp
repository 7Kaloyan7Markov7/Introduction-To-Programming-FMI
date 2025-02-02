#include <iostream>

int getDigitCount(long num)
{
	if (!num) return 1;

	int counter = 0;
	while (num != 0)
	{
		counter++;
		num /= 10;
	}
	return counter;
}

int getTh(long num, int index)
{
	for (int i = 0; i < index; ++i)
	{
		num /= 10;
	}
	return num % 10;
}

int NumCalc(long num, int k, int l)
{
	int size = getDigitCount(num);
	if (k > size || k < 0 || l > size || l < 0) return -1;

	int kth = 0;
	int ith = 0;

	kth = getTh(num,k);
	ith = getTh(num,l);


	return kth + ith;
}
