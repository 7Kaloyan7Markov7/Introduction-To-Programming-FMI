#include <iostream>
//Калоян Марков?

long convertNumber(const char* numStr)
{
	long sum = 0; 
	int index = 0; 
	while (numStr[index] != '\0')
	{
		
		if (numStr[index] < '0' || numStr[index] > '9') return -1;
		sum += numStr[index];
		index++;
	}
	return sum; 
}
