#include <iostream>

void customizeNumB(int a, int k, int& b)
{
	int num = 0;
	int temp = 1;
	for (int i = 0; i < k; ++i)
	{
		num += (a % 10) * temp;
		temp *= 10;
		a /= 10;
		b *= 10;
	}

	b = b + num;
}
