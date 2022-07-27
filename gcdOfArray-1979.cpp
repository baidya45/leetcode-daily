#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return gcd(nums[0], nums[nums.size() - 1]);
}

int main()
{
}