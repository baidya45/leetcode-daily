#include<bits/stdc++.h>
using namespace std;
int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
       int i=1;
       while (i<nums.size() and nums[i]==nums[i-1] )
       {
        cout<<"hi"<<endl;
        i++;
       }
       i++;
        while (i<nums.size() and nums[i]==nums[i-1])
       {
        i++;
       }
        cout<<i<<endl;
       if(i>=nums.size()){
        return nums[0];
       }
       else{
        return nums[i];
       }

               
    }
int main(){
    vector<int> arr={1,1,1,1};
    cout<<thirdMax(arr);
}