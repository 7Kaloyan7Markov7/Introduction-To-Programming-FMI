long convertNumber(const char* num)
{
	if (!num) return 0;

	int hist[256] = {};

	size_t index = 0;
	while (num[index] != '\0')
	{
		hist[num[index]]++;
		index++;
	}
	int counter = 0;
	long sum = 0;

	for (int i = 256; i >= 0; --i)
	{
		while (hist[i - 1] != 0 && counter < 3)
		{
			sum += i - 1;
			hist[i - 1]--; 
			counter++;
		}
	}

	return sum;
}
