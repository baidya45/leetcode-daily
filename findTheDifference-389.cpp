#include<bits/stdc++.h>
using namespace std;

 char findTheDifference(string s, string t) {
    sort(s.begin(),s.end());        
    sort(t.begin(),t.end());  
    s=s+" ";
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            return t[i];
        }
    }  

    return 0;    
}

int main(){

}