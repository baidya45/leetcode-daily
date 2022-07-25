#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int total=row*col;
        int count=0;
        int startCol=0,startRow=0,endRow=row-1,endCol=col-1;
        while(count<=total){
            // strating row
            for(int i=startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // end column
            for(int i=startRow;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // end row
            for(int i=endCol;i>=startCol;i--){
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // start column
            for(int i=endRow;i>=startRow;i--){
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return ans;
}

int main(){

}