#include <iostream>

int getNum(int x, int m, int n)
{
    return x >> (m - n + 1);
}

int main()
{
    int x, m, n;
    std::cin >> x >> m >> n;

    std::cout << getNum(x, m, n);

    return 0;
}
