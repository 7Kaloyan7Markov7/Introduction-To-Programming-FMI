#include <iostream>

int AnalyzeArray(int arr[], int l)
{
	if (l < 0) return -1;

	int sum = 0;
	int newSum = 0;

	for (int i = 0; i < l; ++i) sum += arr[i];
	if (sum % 2) return 0;

	for (int i = 0; i < l; ++i)
	{
		newSum += arr[i];
		if (newSum == sum / 2) return 1;
	}

	return 0;
}
