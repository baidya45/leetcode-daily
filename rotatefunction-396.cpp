#include<bits/stdc++.h>
using namespace std;


 int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0,tsum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            tsum+=nums[i]*i;
        }
        int ans=INT_MIN;
        for(int i=n-1;i>=0;i--){
            tsum=tsum-(nums[i]*(n-1))+(sum-nums[i]);
            //int r=(tsum-(nums[i]*(n-1)))+(sum-nums[i]);
            ans=max(ans,tsum);
        }
        return ans;

}

