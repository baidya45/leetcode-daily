#include<bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int i=0;i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
            ans.push_back(arr[j][i]);
        }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
            ans.push_back(arr[j][i]);

        }
        }
    }
    return ans;
}
int main(){

}