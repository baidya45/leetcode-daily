#include <bits/stdc++.h>
using namespace std;

vector<int> addToArrayForm(vector<int> &num, int k)
{
    int temp = k;
    int carry = 0;
    int lenOfk = 0;
    while (temp)
    {
        lenOfk++;
        temp /= 10;
    }
    temp = k;

    if (num.size() < lenOfk)
    {
        int len = num.size();
        reverse(num.begin(), num.end());
        for (int i = 1; i <= lenOfk - len; i++)
        {
            num.push_back(0);
        }
        reverse(num.begin(), num.end());
    }
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int digit = temp % 10;
        int sum = digit + num[i] + carry;
        num[i] = (sum) % 10;
        sum >= 10 ? carry = 1 : carry = 0;
        temp = temp / 10;
    }
    if (carry == 1)
    {
        reverse(num.begin(), num.end());
        num.push_back(carry);
        reverse(num.begin(), num.end());
    }
    return num;
}

int main()
{
    vector<int> num = {0};
    vector<int> ans = addToArrayForm(num, 345);
    for (auto i : ans)
    {
        cout << i;
    }
}

