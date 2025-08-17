#include <iostream>

size_t digitCount(int N)
{
	if (!N) return 0;
	size_t count = 0;

	while (N != 0)
	{
		N /= 10;
		count++;
	}
	return count;
}

long power(int m, int n)
{
	long base = 1;
	for (int i = 0; i < n; ++i)
	{
		base *= m;
	}

	return base;
}

int Find(long N, int n)
{
	if (n <= 0 || n >= 8)
	{
		std::cout << "Invalid n";
		return -1;
	}

	if (N <= 0)
	{
		std::cout << "Invalid N";
		return -1;
	}

	size_t dCount = digitCount(N);

	long highestNum = -1;

	long pow = power(10, n);
	for (int i = 0; i < dCount - n; ++i)
	{
		long currNum = N % pow;
		N /= 10;
		if (currNum > highestNum) highestNum = currNum;
	}
	
	return highestNum;
}

int main()
{

	std::cout << Find(1234, 3);
	return 0;
}
