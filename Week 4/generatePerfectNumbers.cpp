#include <iostream>

void generatePerfectNums(int a, int b)
{
	int sum = 0;
	if (a < 0 || b < 0)
	{
		return;
	}

	if (a >= b)
	{
		std::cout << "invalid input";
		return;
	}

	for (int i = a; i < b; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i && i != 0)
		{
			std::cout << i << std::endl;
		}
		sum = 0;
	}
}
