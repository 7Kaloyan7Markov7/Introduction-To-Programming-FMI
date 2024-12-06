#include <iostream>

int secretNum(int n, int k)
{
	int result = 0;
	int temp = 1;

	for (int i = 0; i < k; ++i)
	{
		if ((n >> i) & 1)
		result += temp;

		temp *= 2;
	}
	return result;
}

int main()
{
	int n, k = 0;
	std::cin >> n >> k;
	
	std::cout<< secretNum(n, k);
	return 0;
}
