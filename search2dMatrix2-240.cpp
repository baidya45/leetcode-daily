#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int row=matrix.size();
        int col=matrix[0].size();
        
        while(i<row){
        int s=0;
        int e=col-1;
        int mid=s+(e-s)/2;
            while(s<=e){
                int ele=matrix[i][mid];
                if(ele==target)
                    return 1;
                if(target>ele){
                    s=mid+1;
                }
                else
                    e=mid-1;
                mid=s+(e-s)/2;
            }
            i++;
        }
        
        return 0;
}

int main(){

}