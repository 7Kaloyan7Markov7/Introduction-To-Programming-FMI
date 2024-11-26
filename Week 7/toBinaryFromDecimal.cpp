#include <iostream>

unsigned int toBinaryFromDecimal(unsigned int n)
{
	int result = 0;
	int mult = 1;
	while (n != 0)
	{
		if (n % 2 == 1)
			result += mult;
		mult *= 10;
		n /= 2;
	}
	return result;
}


int main()
{
    std::cout<< toBinaryFromDecimal(55) << endl;
    return 0;
}
