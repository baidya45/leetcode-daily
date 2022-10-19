#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans,string &output,int idx,string map[],string digits){
    if(idx>=digits.length()){
        ans.push_back(output);
        return;
    }

    int number=digits[idx]-'0';
    string value=map[number];
    for(int i=0;i<value.length();i++){
        output.push_back(value[i]);
        solve(ans,output,idx+1,map,digits);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    string output;
    int index=0;
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(ans,output,index,map,digits);

    return ans;
}

int main()
{
}