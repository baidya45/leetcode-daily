#include<bits/stdc++.h>
using namespace std;

 int findPeakElement(vector<int>& nums) {
    int end = nums.size() - 1;
    int start = 0;
    int mid = start + (end - start) / 2;
    if(nums.size()==1){
        return 0;
    }
    while (end > start)
    {  
        if(mid==0 && nums[mid]>nums[mid+1]){
                break;
        }
        
        else if (nums[mid] < nums[mid + 1])
        {
            start = mid + 1;
        }
        else if(nums[mid] > nums[mid+1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;

 }
int main(){

}