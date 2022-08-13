#include<bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int count =1;
        sort(candyType.begin(),candyType.end());
        for(int i=1;i<n;i++){
            if(candyType[i]!=candyType[i-1]){
                count++;
            }
        }
        if(count<=(n/2))
            return count;
        else
            return (n/2);
    }

int main(){

}