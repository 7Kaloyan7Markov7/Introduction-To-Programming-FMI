char* CheckStr(const char* str)
{
	if (!str) return nullptr;
	size_t len = 0;
	size_t resIndex = 0;

	for (int i = 0; str[i] != '\0'; ++i)
	{
		for (int j = 0; str[j] != '\0'; ++j)
		{
			if (i <= j) continue;
			if (str[i] == str[j])
			{
				len++;
				break;
			}
		}
	}

	char* res = new char[len + 1];

	for (int i = 0; str[i] != '\0'; ++i)
	{
		for (int j = 0; str[j] != '\0'; ++j)
		{
			if (i == j) continue; 
			if (str[i] == str[j])
			{
				res[resIndex++] = str[j];
				break;
			}
		}
	}

	res[len] = '\0';
	return res;
}
