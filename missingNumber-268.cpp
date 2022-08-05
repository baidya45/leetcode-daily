#include<bits/stdc++.h>
using namespace std;
 int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int i;
        if(nums[0]!=0){
            return 0;
        }
        if(nums[len-1]!=len){
            return len;
        }
        for(i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=(nums[i]+1)){
                break;
            }
        }
        return nums[i]+1;
        
    }

    int main(){
        
    }