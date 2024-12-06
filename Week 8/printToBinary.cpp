#include <iostream>

void printToBinary(int n)
{
	for (int i = 31; i >= 0; --i)
	{
		std::cout << ((n >> i) & 1);
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	
	printToBinary(n);
	return 0;
}
