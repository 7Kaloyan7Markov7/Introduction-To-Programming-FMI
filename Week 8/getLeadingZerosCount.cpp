#include <iostream>

unsigned getLeadingZerosCount(unsigned num)
{
	int counter = 0;
	for (int i = 31; i >= 0; --i)
	{
		if (!((num >> i) & 1))
			counter++;
		else break;
	}
	return counter;
}

int main()
{
	int n = 0;
	std::cin >> n;
	
	std::cout<< getLeadingZerosCount(n);
	return 0;
}
