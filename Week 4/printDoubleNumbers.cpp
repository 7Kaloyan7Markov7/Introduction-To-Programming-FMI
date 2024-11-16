#include <iostream>

void printDoubleNumbers(int p, int q)
{
	if (p >= q)
	{
		std::cout << "invalid input";
		return;
	}

	for (int i = p; i < q; ++i)
	{
		if(i + 2 <= q)
		std::cout << "(" << i << "," << i + 2 << ")" << std::endl;
	}
}
