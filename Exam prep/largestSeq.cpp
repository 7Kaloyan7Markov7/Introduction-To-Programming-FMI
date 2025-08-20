int largestSeq(int arr[], int N)
{
	if (!N) return 0;

	int sum = 0;

	for (int i = 0; i < N - 1; ++i)
	{
		size_t index = 0;
		int currSum = arr[i];
		while (index + i < N - 1 && arr[i + index] < arr[i + index + 1])
		{
			currSum += arr[i + index + 1];
			index++;
		}
		if (currSum > sum) sum = currSum;
	}

	return sum;
}
