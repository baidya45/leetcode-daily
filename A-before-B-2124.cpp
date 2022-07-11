#include<bits/stdc++.h>
using namespace std;

bool checkString(string s) {
    int n = s.length();
    int x=n+1;
    for(int i = 0;i<n;i++){
        if(s[i]=='b'){
            x=i;
            break;
        }
    }        
    for(int i = x+1;i<n;i++){
        if(s[i]=='a'){
            return false;
        }
    }

    return true;
}

int main(){

}