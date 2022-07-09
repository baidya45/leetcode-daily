#include<bits/stdc++.h>
using namespace std;

  void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    for(int i =1;i<n;i++){
        int j=i-1;
        // int key = nums[j];
        while(j>=0 && nums[j]==0){
            swap(nums[j],nums[j+1]);
            j--;

        }
        // nums[i]=key;

    }        
}
// from discussion
//  int key=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0)
//                 swap(nums[i],nums[key++]);
//         }

int main(){

}