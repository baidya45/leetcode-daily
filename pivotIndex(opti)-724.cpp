#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
int sum =0,lsum=0;
for(int i =0;i<nums.size();i++){
    sum+=nums[i];
}        
for(int i = 0;i<nums.size();i++){
    if(sum-nums[i]==lsum){
        return i;
    }
    else{
        lsum+=nums[i];
        sum-=nums[i];
    }
}
return -1;
}

int main(){

}