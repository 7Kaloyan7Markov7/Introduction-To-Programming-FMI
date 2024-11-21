void getSums(const int matrix[MAX_SIZE][MAX_SIZE], int size)
{
	int firstSum = 0;
	int secSum = 0;

	for(int i = 1;i < size;++i)
	{
		for (int j = 0; j < i; ++j)
		{
			firstSum += matrix[size - i + j][j];
		}
	}
	
	for (int i = 0; i < size; i++)
	{
		secSum += matrix[i][i];
	}

	for (int i = 1; i < size; ++i)
	{
		for (int j = 0; j < size - i; ++j)
		{
			secSum += matrix[j][i + j];
		}
	}
  std::cout << firstSum << " " << secSum;
}
