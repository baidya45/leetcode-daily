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



int removeDuplicates2(vector<int>& nums) {
        int cnt=0;
        int flag=0;
        int k=2;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                flag++;
                if(flag>=k)
                    cnt++;
            }
            else
                flag=0;
            nums[i-cnt]=nums[i];
        }
        return nums.size()-cnt;
    
    }