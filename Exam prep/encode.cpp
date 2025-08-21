char* Encode(const char* str)
{
	if (!str) return nullptr;

	size_t len = strLen(str);
	size_t newLen = len - 1;

	for (int i = 0; i < len; ++i)
	{
		newLen += countOfDigits(str[i]);
	}

	char* res = new char[newLen + 1];
	size_t resIndex = 0;

	for (int i = 0; i < len; ++i)
	{
		char curr = str[i];

		if (curr < 10)
		{
			res[resIndex++] = (char)curr;
		}
		else if (curr < 100 && curr >= 10)
		{
			res[resIndex++] = (char)(((curr / 10)) + '0');
			res[resIndex++] = (char)((curr % 10) + '0');
		}
		else if (curr >= 100 && curr <= 255)
		{
			res[resIndex++] = (char)((curr / 100) + '0');
			res[resIndex++] = (char)((((curr % 100)) / 10) + '0');
			res[resIndex++] = (char)((curr % 10) + '0');
		}
		if (resIndex != newLen) res[resIndex++] = '_';
	}
	res[resIndex] = '\0';

	return res;
}
