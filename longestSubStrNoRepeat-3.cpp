#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int max = 0, count = 0;
    int arr[96];
    for (int j = 0; j < 96; j++)
    {
        arr[j] = -1;
    }
    int i = 0;
    while (i < s.length())
    {
        if (arr[(s[i] - ' ')] == -1)
        {
            arr[(s[i] - ' ')] = i;
            count++;
            max = max > count ? max : count;
            i++;
        }
        else
        {
            i = arr[(s[i] - ' ')] + 1;
            for (int j = 0; j < 96; j++)
            {
                arr[j] = -1;
            }
            count = 0;
        }
    }
    return max;
}
int main()
{
    cout << lengthOfLongestSubstring("dvdf");
}