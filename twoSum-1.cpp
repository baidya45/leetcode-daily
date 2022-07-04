#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if (nums[j] == target - nums[i]) {
                    return res={i,j};
                }
        }
    }

    return res={-1};
}

int main()
{
    vector<int> v = {2,6,5,7,9};
    int target = 20;
   vector<int> ans = twoSum(v,target);
   for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
}