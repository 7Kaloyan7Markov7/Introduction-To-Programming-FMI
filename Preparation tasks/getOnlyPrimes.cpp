#include <iostream>

bool isPrime(int n)
{
	if (n == 2) return true;
	if (n == 0 || n == 1) return false;


	for (int i = 2; i < n; ++i)
	{
		if (!(n % 2)) return false;
	}
	return true;
}

int countOfPrimes(const int* arr,int size)
{
	if (!arr) return 0;
	int counter = 0;

	for (int i = 0; i < size; ++i)
	{
		if (isPrime(arr[i]))
		{
			counter++;
		}
	}
	return counter;
}

int* getOnlyPrimes(int* arr, int size)
{
	int primeSize = countOfPrimes(arr, size);

	int* primes = new int[primeSize];
	int resIndex = 0;

	for (int i = 0; i < size; ++i)
	{
		if (isPrime(arr[i]))
		{
			primes[resIndex] = arr[i];
			resIndex++;
		}
	}

	delete[] arr;
	return primes;
}
