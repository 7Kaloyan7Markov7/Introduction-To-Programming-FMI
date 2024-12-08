#include <iostream>

void swap(int& a, int& b)
{
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
}


int main()
{
	int a, b = 0;
	std::cin >> a >> b;

	swap(a, b);
	std::cout << "a is: " << a << "b is: " << b;

	return 0;
}
