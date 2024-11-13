#include <iostream>


long long concatinateNumbers(long long n, long long m)
{
	int counter = 0;
	long long temp = m;
	
	while (temp != 0)
	{
		temp /= 10;
		counter++;
	}

	for (int i = 0; i < counter; ++i)
	{
		n *= 10;
	}

	if (counter == 0)
	{
		n *= 10;
	}

	return (n + m);
}
