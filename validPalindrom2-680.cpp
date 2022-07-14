#include <bits/stdc++.h>
using namespace std;
bool validPalindrome(string s)
{
    int e = 0, count = 0;
    int h = s.length() - 1;
    while (e <= h)
    {
        if (s[e] == s[h])
        {
            e++;
            h--;
        }
        else
        {
            s.erase(e, 1);
            h--;
            count++;
            if (count > 1)
            {
                return false;
            }
        }

    }
        return true;
}
int main()
{
    string s = "abc";
    cout << validPalindrome(s);
}