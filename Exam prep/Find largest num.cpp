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
	if (dCount < n) return -1;

	int* arr = new int[dCount];

	long highestNum = 0;
	for (int i = dCount - 1; i >= 0; --i)
	{
		arr[i] = N % 10;
		N /= 10;
	}


	for (int i = 0; i < dCount; ++i)
	{
		long currNum = 0;
		int index = 0;
		while (i + index < dCount && index < n)
		{
			currNum *= 10;
			currNum += arr[i + index]; 
			index++;
		}
		if (currNum > highestNum)
		{
			highestNum = currNum;
		}
	}

	delete[] arr;
	return highestNum;
}

int main()
{

	std::cout << Find(51243942, 3);
	return 0;
}
