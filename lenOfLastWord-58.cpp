#include<bits/stdc++.h>
using namespace std;
 int lengthOfLastWord(string s) {
    int n = s.length();
    int count=0;
    for(int i = n-1;i>=0;i--){
        if(s[i]!=' '){
            count++;
        }
        else if(s[i]==' ' && count==0){
            continue;
        }
        else{

            break;
        }
    }        

    return count;
}