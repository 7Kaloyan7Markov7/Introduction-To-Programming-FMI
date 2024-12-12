int getBitsUp(int num)
{
	int counter = 0;
	if ((num >> 0) & 1)
		counter++;
	while (num != 0)
	{
		if((num >> 1) & 1)
		counter++;

		num >>= 1;
	}
	return counter;
}
