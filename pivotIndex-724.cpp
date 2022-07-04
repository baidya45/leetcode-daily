#include<bits/stdc++.h>
using namespace std;

// bad code as many times the sum loop is running the 
// total time is increasing.
int sum(vector<int>& nums,int start,int end){
    int ans=0;
    for(int i = start;i<=end;i++){
        ans+=nums[i];
    }

    return ans;
}
 int pivotIndex(vector<int>& nums) {
    int s = 0;
    int h = nums.size()-1;
    int mid = s+(h-s)/2;
   while(mid>=0 ||mid<=h){
     if(sum(nums,0,mid-1)>sum(nums,mid+1,h)){
        if(mid==h)
            return -1;
        else
            mid--;
    }
    else if(sum(nums,0,mid-1)<sum(nums,mid+1,h)){
        if(mid==s)
            return -1;
        else
            mid++;
    }
    else{
        break;
    }
   }

    return mid;
}
int main(){
vector<int> v = {1,2,3};
cout<<pivotIndex(v);

}