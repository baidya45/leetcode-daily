#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n = nums.size()/2;
       int count=1;
       for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
                if(count>n){
                    return nums[i];
                }
            }
            else{
                count=1;
            }
       } 

}

int main(){

}