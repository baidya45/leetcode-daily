#include <bits/stdc++.h>

using namespace std;

int singleNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
   

    for (int i = 0; i < nums.size(); i++)
    {
        

        if ((nums[i] ^ nums[i + 1]) == 0)
        {
            
            i += 2;
            if (i == nums.size() - 2)
            {
                return nums[i + 1];
            }
            else
            {
                continue;
            }
        }
        return nums[i];
    }
}

int main()
{
    vector<int> v = {1, 3, 1, 3, 1, 0, 3, 0, 0, 2};
    int ans = singleNumber(v);
    cout<<ans;
}