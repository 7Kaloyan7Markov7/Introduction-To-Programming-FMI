int* numOfWords(const char* str)
{
	if (!str) return nullptr;

	int* res = new int[2] {0};
	size_t len = strLen(str);

	for (int i = 0; i < len; ++i)
	{
		size_t index = 0;

		while (i + index < len && str[i + index] != '\0' && str[i + index] != '\n' && str[i + index] != '\t' && str[i + index] != ' ')
		{
			index++;
		}
		i = i + index;
		if (index != 0)
		{
			if (index % 2 == 1) res[1]++;
			else res[0]++;
		}
	}

	return res;
}
