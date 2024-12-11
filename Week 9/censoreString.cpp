void censoreString(char str[])
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
			str[index] = '*';
		index++;
	}
}
