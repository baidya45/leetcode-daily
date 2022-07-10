#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums);
    int n = nums.size();
    for(int i =0;i<n;i++){
        nums[(i+k)%n]=temp[i];
    }
}

int main(){
    vector<int> v={1};
    rotate(v,0);
}