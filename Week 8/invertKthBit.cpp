#include <iostream>

unsigned invertKthBit(unsigned n, int k)
{
	int mask = 1;
	for (int i = 0; i < k; ++i)
	{
		mask = mask << 1;
	}

	if ((n >> k) & 1) return (n & ~mask);
	else return (n | mask);
}

int main()
{
	int n, k = 0;
	std::cin >> n >> k;
	
	std::cout<< invertKthBit(n, k);
	return 0;
}
