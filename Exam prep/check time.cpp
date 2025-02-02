#include <iostream>
//HH:MM:SS
//01234567
const int realLen = 8;

int strLen(const char str[])
{
	int index = 0;
	while (str[index] != '\0') index++;

	return index;
}

bool checkDots(const char str[])
{
	if (str[2] != ':' || str[5] != ':') return false;
	return true;
}

bool checkHours(const char str[])
{
	if (str[0] != '1' && str[0] != '2') return false;
	if (str[0] == '1' && (str[1] < '0' || str[1] > '9')) return false;
	if (str[0] == '2' && (str[1] < '0' || str[1] > '3')) return false;

	return true;
}

bool check(const char str[],int index1, int index2)
{
	if (str[index1] < '0' || str[index1] > '5') return false;
	if (str[index2] < '0' || str[index2] > '9') return false;

	return true;
}

int CheckTimeStr(char str[])
{
	if (strLen(str) != realLen) return -1;

	if (!checkDots(str) || !checkHours(str) ||
		!check(str,3,4) || !check(str,6,7)) return -1;

	return 1;
}
