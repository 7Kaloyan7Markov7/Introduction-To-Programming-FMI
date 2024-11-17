#include <iostream>

const int MAX_SIZE = 100;

bool isSubArray(const int arr1[MAX_SIZE], const int arr2[MAX_SIZE], int size1, int size2)
{
    if (size1 <= 0 || size2 <= 0 || size1 > MAX_SIZE || size2 > MAX_SIZE)
    {
        return false;
    }

    for (int i = 0; i < size2; ++i)
    {
        bool found = false;
        for (int j = 0; j < size1; ++j)
        {
            if (arr2[i] == arr1[j])
            {
                found = true;
                break; 
            }
        }
        if (!found)
        {
            return false;
        }
    }

    return true; 
}
