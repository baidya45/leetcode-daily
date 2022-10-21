#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans,vector<int> &output,int index,vector<int> candidates,int target){
    int sum=0;
    for(int i=0;i<output.size();i++){
        sum+=output[i];
    }
    if(sum>target){
        return;
    }
    else if(sum==target){
     ans.push_back(output);
     return;   
    }


   for(int i=index;i<candidates.size();i+=2){
    output.push_back(candidates[i]);
    solve(ans,output,i,candidates,target);
    output.pop_back();
    if(i==candidates.size()-1){
        return;
    }

    output.push_back(candidates[i+1]);
    solve(ans,output,i+1,candidates,target);
    output.pop_back();

   }

       
    
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(ans,output,index,candidates,target);

    return ans;
}