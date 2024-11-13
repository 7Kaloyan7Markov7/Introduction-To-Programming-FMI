#include <iostream>

void printGeometricProgression(float firstElement, float ratio, int n)
{
	if (n <= 0)
	{
		std::cout << "Invalid input for n (must be higher than zero)";
		return;
	}

	if (!firstElement)
	{
		std::cout << 0;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << firstElement << " ";
		firstElement *= ratio;
	}
}
