#include <iostream>

unsigned invertKthBit(unsigned n, int k)
{
	if (k < 0) return -1;

	int mask = 1 << k;

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
