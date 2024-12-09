#include <iostream>

int getBitsCount(int n)
{
    int bitCounter = 0;
    while (n > 0)
    {
        n = n >> 1;
        bitCounter++;
    }
    return bitCounter;
}

bool isPalindrome(int n)
{
    int size = getBitsCount(n);
    for (int i = size; i >= size/2; --i)
    {
        if (((n >> i) & 1) != ((n >> size - i - 1) & 1)) return false;
    }
    return true;
}

int main()
{
    int n = 0;
    std::cin >> n;

    std::cout << isPalindrome(n);

    return 0;
}
