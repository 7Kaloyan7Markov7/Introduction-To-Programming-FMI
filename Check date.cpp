#include <iostream>

size_t strLen(const char* str)
{
	size_t index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	return index;
}


//DD:MM:YYYY
//0123456789

int strToNum(const char* str, size_t start)
{
	size_t index = start;
	int base = 0;
	while (str[index] != ':' && str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
		{
			base = -1;
			break;
		}
		base *= 10;
		base += str[index] - '0';
		index++;
	}


	return base;
}

bool checkDate(const char* date)
{
	if (!date) return false;
	size_t len = strLen(date);
	if (len != 10) return false;
	if (date[2] != ':' || date[5] != ':') return false;

	int year = strToNum(date,6);
	int month = strToNum(date,3);
	int day = strToNum(date,0);
	if (year <= 0 || year > 9999) return false;
	if (day <= 0 || day > 31) return false;
	if (month <= 0 || month > 12) return false;
	bool isLeap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));

	if (month != 1 && month != 3 && month != 5 && month != 7
		&& month != 8 && month != 10 && month != 12 && day >= 31) return false;


	if (month == 2 && !isLeap && day == 29) return false;

	return true;
}

int main()
{

	std::cout << checkDate("00:01:2023");
	return 0;
}
