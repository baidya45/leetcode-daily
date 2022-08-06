#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    while (n)
    {
        if (n % 3 == 0)
        {
            n = n / 3;
            if (n == 1)
            {
                break;
            }
        }
        else
        {
            return false;
        }
    }

    return 1;
}