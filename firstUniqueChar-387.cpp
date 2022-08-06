#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
     int i,j;
        for(i=0;i<s.length();i++){
            for(j=0;j<s.length();j++){
                if(j==i){
                    continue;
                }
                if(s[i]==s[j]){
                    break;
                }
            }
            if(j==s.length()){
                return i;
            }
        }
        return -1;
        
}

int main(){

}