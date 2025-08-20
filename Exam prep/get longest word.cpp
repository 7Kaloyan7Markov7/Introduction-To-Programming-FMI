char* GetWord(char str[])
{
	if (!str) return nullptr;
	size_t longestWord = 0;

	size_t lastWhiteSpace = 0;
	size_t len = strLen(str);
	size_t counter = 0;

	for (int i = 0; i < len; ++i)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || i == len - 1 )
		{
			if (counter > longestWord)
			{
				longestWord = counter;
				lastWhiteSpace = i - counter;
			}
			counter = 0;
		}
		counter++;
	}

	char* res = new char[longestWord + 1];

	for (int i = 0; i < longestWord; ++i)
	{
		res[i] = str[lastWhiteSpace + i];
	}
	res[longestWord] = '\0';

	return res;
}
