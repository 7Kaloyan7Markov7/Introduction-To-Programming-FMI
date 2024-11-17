#include <iostream>

const int MAX_SIZE = 100;

bool analyzeArray(const char arr[MAX_SIZE], int size)
{
	int countOfDigits = 0;
	int countOfCapital = 0;
	int countOfSmall = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			countOfDigits++;
		}
		if (arr[i] >= 'а' && arr[i] <= 'z')
		{
			countOfSmall++;
		}
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			countOfCapital++;
		}
	}
	int absDif = (countOfCapital - countOfSmall) < 0 ? (countOfSmall - countOfCapital) : (countOfCapital - countOfSmall);

	return countOfDigits == absDif;
}
