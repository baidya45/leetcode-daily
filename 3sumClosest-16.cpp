#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    int gap = INT_MAX;
    int res;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
        {
            continue;
        }
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            int currGap = abs(target - sum);
            if (sum < target)
            {
                if (currGap < gap)
                {
                    gap=currGap;
                    res=sum;
                }
                j++;
            }
            else if(sum>target)
            {
                 if (currGap < gap)
                {
                    gap=currGap;
                    res=sum;
                }
                k--;
            }
            else{
                res=sum;
                break;
            }
        }
    }
    return res;
}

int main()
{
}