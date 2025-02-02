#include <iostream>

bool AnalyzeArr(int arr[], int length)
{
	if (length < 2) return false;
	int counter = 0;

	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == i) counter++;
		if (counter == 2) return true;
	}
	return false;
}
