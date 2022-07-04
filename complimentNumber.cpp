#include<bits/stdc++.h>
using namespace std;


int bitwiseComplement(int n) {
        string res="";
    int ans=0;
    int bit;
        if(n==0){
            return 1;
        }
    while(n){
        bit = n&1;
        res+=to_string(bit);
        n=n>>1;
    }
    for(int i = 0;i<res.length();i++){
        if(res[i]=='0'){
            res[i]='1';
        }
        else{
            res[i]='0';
        }
        ans+=(res[i]-'0')*(pow(2,i));
    }
    


    return ans;
    }
int main(){


return 0;
}