#include<bits/stdc++.h>
using namespace std;
int countSegments(string s) {
        int len = s.length();
        int count = 0;
        int i;
        if(len==0){
            return 0;
        }
       
        for(i=1;i<len;i++){
            if(s[i]==' ' and s[i-1]!=' '){
                count++;
            }
        }
        if(s[len-1]!=' '){
            count++;
        }
        
        return count;
    }