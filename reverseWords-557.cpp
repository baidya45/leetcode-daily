#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int len = s.length();
    int i = 0, j = 0;
    int k, p;
    while (i < len)
    {
        while (s[j] != ' ' && j != len)
        {
            j++;
        }
        p = i;
        k = j - 1;
        while (k > p)
        {
            swap(s[p], s[k]);
            p++;
            k--;
        }
       i=j+1;
       j=j+1;
    }
    return s;
}

int main()
{
    // string ans = reverseWords("hey boy code it");
    // cout << ans;
    cout<<(1^2^2^1^3);
}