#include <iostream>

int strLen(const char* str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

bool isSubstring(const char* s1, const char* s2)
{
    int s2Len = strLen(s2);
    int s1Len = strLen(s1);

    if (s2Len > s1Len) return false;

    for (int i = 0; i <= s1Len - s2Len; ++i)
    {
        bool isSub = true;
        for (int j = 0; j < s2Len; ++j)
        {
            if (s1[i + j] != s2[j])
            {
                isSub = false;
                break;
            }
        }
        if (isSub) return true;
    }
    return false;
}
