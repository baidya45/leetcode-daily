 #include<bits/stdc++.h>
 using namespace std;

  vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int val,i,j;
        for(i = 0;i<nums.size();i++){
            for(j=i+1;j<nums.size();j++){
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                ans.push_back(temp);
            }
        }
        return ans;
    }