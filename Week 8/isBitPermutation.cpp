	#include <iostream>

	bool isBitPermutation(int a, int b)
	{
		int aCounter = 0;
		int bCounter = 0;

		for (int i = 31; i >= 0; --i)
		{
			if ((a >> i) & 1) aCounter++;
			if ((b >> i) & 1) bCounter++;
		}
		return aCounter == bCounter;
	}

	int main()
	{
		int a, b = 0;
		std::cin >> a >> b;
	
		std::cout<< isBitPermutation(a,b);
		return 0;
	}
