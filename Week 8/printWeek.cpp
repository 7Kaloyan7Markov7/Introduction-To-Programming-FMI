#include <iostream>

void printWeek(int n)
{
	for (int i = 0; i < 7; ++i)
	{
		if ((n >> i) & 1)
		{
			switch (i)
			{
			case 0: std::cout << "Monday, ";
				break;
			case 1: std::cout << "Tuesday, ";
				break;
			case 2: std::cout << "Wednesday, ";
				break;
			case 3: std::cout << "Thursday, ";
				break;
			case 4: std::cout << "Friday, ";
				break;
			case 5: std::cout << "Saturday, ";
				break;
			case 6: std::cout << "Sunday, ";
				break;
			}
		}
	}

}


int main()
{
	int n = 0;
	std::cin >> n;
	printWeek(n);

	return 0;
}
