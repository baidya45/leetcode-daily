#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
   unordered_map<int,int>mp;
    for(auto x:nums)
        mp[x]++;
    
    for(int i=0;i<nums.size();i++)
    {
        auto itr = mp.find(nums[i]);
        if( itr->second==1 )
        {
            continue;
        }
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j] and abs(i-j)<=k)
                return true;
        }
    }
    return false; 

}

int main()
{
}