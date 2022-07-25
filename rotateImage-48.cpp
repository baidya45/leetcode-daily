#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int row=matrix.size();
        int col =matrix[0].size();
        int arr[row][col];
        for(int i =0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[j][col-1-i]=matrix[i][j];
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<"         ";
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    int main(){
        vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
        rotate(matrix);
    }