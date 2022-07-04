#include<bits/stdc++.h>
using namespace std;

 vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    int n =nums.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((nums[i]^nums[j])==0){
                ans.push_back(nums[i]);
                break;
            }
        }
    }        
    return ans;
}

int main(){
    vector<int> v ={4,3,2,7,8,2,3,1};
vector<int> ans = findDuplicates(v);
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}