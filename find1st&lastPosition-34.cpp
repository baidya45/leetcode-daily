#include<bits/stdc++.h>
using namespace std;

int firstOccur(vector<int>& nums,int n,int key){
    int s = 0;
    int h = n-1;
    int mid = s+(h-s)/2;
    int ans=-1;

   while(s<=h){
     if(nums[mid]==key){
        h=mid-1;
        ans=mid;
    }
    else if(nums[mid]>key){
        h = mid-1;
    }
    else if(nums[mid]<key){
        s = mid+1;
    }
    mid= s+(h-s)/2;
   }
   return ans;
}
int lastOccur(vector<int>& nums,int n,int key){
    int s = 0;
    int h = n-1;
    int mid = s+(h-s)/2;
    int ans=-1;

   while(s<=h){
     if(nums[mid]==key){
        s=mid+1;
        ans=mid;
    }
    else if(nums[mid]>key){
        h = mid-1;
    }
    else if(nums[mid]<key){
        s = mid+1;
    }
    mid= s+(h-s)/2;
   }
   return ans;
}



vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstOccur(nums,n,target);
        int last = lastOccur(nums,n,target);

        vector<int> ans = {first,last};

        return ans;
}

int main(){

}