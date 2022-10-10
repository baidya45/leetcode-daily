#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    vector<int> v;
    int n = nums.size();
    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 and nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int l = i + 1; l < n - 2; l++)
        {
            if (l > i+1 and nums[l] == nums[l - 1])
        {
            continue;
        }

            int j = l + 1, k = n - 1;
            while (j < k)
            {
               long long sum = (long long)nums[i] + (long long)nums[l] + (long long)nums[j] + (long long)nums[k];
                if (sum > target)
                {
                    k--;
                }
                else if (sum < target)
                {
                    j++;
                }
                else
                {
                    v = {nums[i], nums[l], nums[j], nums[k]};
                    ans.push_back(v);
                    while (j < k and nums[j] == nums[j + 1])
                        j++;
                    while (k > j and nums[k] == nums[k - 1])
                        k--;
                    j++;
                    k--;
                }
            }
        }
    }
    return ans;
}

int main()
{
}