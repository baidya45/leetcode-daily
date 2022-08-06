#include<bits/stdc++.h>
using namespace std;

 vector<int> countBits(int n) {
        vector<int> ans;
        int count=0;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int temp=i;
            while(temp){
                if(temp&1){
                    count++;
                }
                    temp=temp>>1;
            }
            ans.push_back(count);
            cout<<count<<" ";
            count=0;
        }
        
        return ans;
}

int main(){
    // cout<<(5&1);
    countBits(100);
}