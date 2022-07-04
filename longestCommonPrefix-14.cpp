#include <bits/stdc++.h>
using namespace std;

int minLen(vector<string> &str, int size)
{
    int min = str[0].length();
    for (int i = 1; i < size; i++)
    {
        if (min < str[i].length())
        {
            min = str[i].length();
        }
    }
    return min;
}
string longestCommonPrefix(vector<string> &strs)
{
    int min = minLen(strs, strs.size());
    string res = "";
    char current = strs[0][0];
    for (int i = 0; i < min; i++)
    {
        current = strs[0][i];

        for (int j = 1; j < strs.size(); j++)
            if (strs[j][i] != current)
                return res;

        // Append to result
        res.push_back(current);
    }

    return (res);
}

int main()
{
}