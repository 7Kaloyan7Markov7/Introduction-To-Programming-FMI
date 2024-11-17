const int MAX_SIZE = 100;

bool AnalyzeArr(const int arr[MAX_SIZE], int size)
{
	if (size <= 0 || size > MAX_SIZE)
	{
		return false;
	}
	int counter = 0;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == i)
		{
			counter++;
		}
		if (counter >= 2)
		{
			return true;
		}
	}

	return false;
}
