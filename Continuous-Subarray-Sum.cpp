#include <bits/stdc++.h>
using namespace std;

bool checkSubarraySum1(vector<int> &nums, int k) //brutforce appraoch
{
    int len = nums.size();
    int i, j,sum=0;
    for (i = 0; i < len - 1; i++)
    {
        sum=nums[i];
        for (j = i + 1; j < len; j++)
        {
            sum+=(nums[j]);
            
            if (((sum) % k) == 0)
            {
                
                return true;
            }
        }
        sum=0;
    }

    return false;
}

int main()
{
    vector<int> v = {23,2,4,6,7};
    int key = 4;
    bool ans = checkSubarraySum1(v,key);
    cout<<ans;
    return 0;
}