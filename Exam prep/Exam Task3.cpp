#include <iostream>

void swap(long& a, long& b)
{
	long temp = a;
	a = b;
	b = temp;
}

void bubbleSort(long* arr, size_t N)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N - i - 1; ++j)
		{
			if (arr[j] >= arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

void copy(const long* source,long* dest , size_t N)
{
	for (int i = 0; i < N; ++i)
	{
		dest[i] = source[i];
	}
}

int getDigitCount(long Num)
{
	if (Num == 0) return 1;
	int counter = 0;

	while (Num != 0)
	{
		Num /= 10;
		counter++;
	}

	return counter;
}

const char* toString(long num)
{
	int strLen = getDigitCount(num);
	char* str = new char[strLen + 1];
	str[strLen] = '\0';

	for (int i = strLen - 1; i >= 0; --i)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
	}

	return str;
}

void concat(char* res, const char* first, const char* sec)
{
	int index = 0;
	int resIndex = 0;

	while (first[index] != '\0')
	{
		res[resIndex++] = first[index++];
	}
	index = 0;
	res[resIndex] = ',';
	resIndex++;

	while (sec[index] != '\0')
	{
		res[resIndex++] = sec[index++];
	}

	res[resIndex] = '\0';
}

char* findDiff(const long arr[], size_t N)
{
	if (N < 2) return nullptr;

	long* temp = new long[N] {0};
	copy(arr, temp, N);
	bubbleSort(temp, N);

	long minDif = arr[1] - arr[0];

	long firstNum = arr[0];
	long secNum = arr[1];


	for (int i = 1; i < N - 1; ++i)
	{
		if (abs(arr[i] - arr[i + 1]) < minDif)
		{
			minDif = abs(arr[i] - arr[i + 1]);
			firstNum = arr[i];
			secNum = arr[i + 1];
		}
	}

	const char* firstStringNum = toString(secNum);
	const char* secStringNum = toString(firstNum);

	int resSize = getDigitCount(secNum) + getDigitCount(firstNum) + 2;

	char* res = new char[resSize];

	concat(res, firstStringNum, secStringNum);

	delete[] firstStringNum;
	delete[] secStringNum;
	delete[] temp;

	return res;
}

int main()
{
	long arr[5] = { 123,4324,55,543,1235 };

	char* res = findDiff(arr, 5);
	std::cout << res;

	return 0;
}
