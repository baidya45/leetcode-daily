#include <bits/stdc++.h>
using namespace std;

void solve(string s, vector<string> &ans, string &output, int idx)
{
    if (idx >= s.size())
    {
        ans.push_back(s);
        return;
    }

    if (s[idx] >= 'a' && s[idx] <= 'z')
    {

        solve(s, ans, output, idx + 1);
        s[idx] = s[idx] - 32;
        solve(s, ans, output, idx + 1);
    }
    else if (s[idx] >= 'A' && s[idx] <= 'Z')
    {

        solve(s, ans, output, idx + 1);
        s[idx] = s[idx] + 32;
        solve(s, ans, output, idx + 1);
    }
    else
    {
        solve(s, ans, output, idx + 1);
    }
}

vector<string> letterCasePermutation(string s)
{
    vector<string> ans;
    int idx = 0;
    string output;
    solve(s, ans, output, idx);
    return ans;
}

int main()
{
}