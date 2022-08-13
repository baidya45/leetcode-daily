#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    vector<int> temp;
    int count = 1, i;
    for (i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            count++;
        }
        else
        {
            if (count >= 2)
            {
                temp.push_back(nums[i]);
                temp.push_back(nums[i]);
                count = 1;
            }
            else
            {
                temp.push_back(nums[i]);
                count = 1;
            }
        }
    }
    if (count >= 2)
    {
        temp.push_back(nums[i]);
        temp.push_back(nums[i]);
        count = 1;
    }
    else
    {
        temp.push_back(nums[i]);
        count = 1;
    }
    int ans=temp.size();
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }
    temp.clear();
    return ans;
}

int main()
{
}