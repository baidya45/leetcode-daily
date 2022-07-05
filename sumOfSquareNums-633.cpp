#include<bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) {
        long long s=0,e = int (pow(c,0.5));
        
        while(s<=e){
            long long ans = (s*s) + (e*e);
            if(ans == c) return 1;
            else if (ans>c) e--;
            else s++;
        }
        return 0; 
    }


    int main(){

        return 0;
    }