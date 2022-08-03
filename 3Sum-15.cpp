#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> v;
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
            if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                v = {nums[i], nums[j], nums[k]};
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

    return ans;
}
int main()
{
}