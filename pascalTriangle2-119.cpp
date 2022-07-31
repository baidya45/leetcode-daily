#include<bits/stdc++.h>
using namespace std;

  vector<int> getRow(int rowIndex) {
          vector<vector<int>> ans;
        int numRows=rowIndex+1;
        if(numRows==1){
            ans={{1}};
            
        }
        else if(numRows==2){
            ans={{1},{1,1}};
        }
        else{
            ans={{1},{1,1}};
            for(int i=2;i<numRows;i++){
                 vector<int> temp;
                 temp.push_back(1);
                for(int j=1;j<i;j++){
                    temp.push_back(ans[i-1][j]+ans[i-1][j-1]);
                }
                temp.push_back(1);
                ans.push_back(temp);
                
            }
            
        }
        return ans[rowIndex];
    }

int main(){
    vector<int> ans = getRow(6);
    for(int i=0;i<ans.size();i++){
        
            cout<<ans[i]<<" ";
        
        
    }
}