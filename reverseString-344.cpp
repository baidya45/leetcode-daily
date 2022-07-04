#include<bits/stdc++.h>

using namespace std;

 void reverseString(vector<char>& s) {
    char temp;
    int len = s.size();
    for(int i=0;i<(len/2);i++){
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
        // cout<<s[i]<<endl; 
    }        
}

int main(){

vector<char> s={'h','j'};
reverseString(s);
}