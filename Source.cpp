#include <iostream>

int getDelimitersCount(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 0;
    }
    
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    
    return count;
}
