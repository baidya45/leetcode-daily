#include<bits/stdc++.h>
using namespace std;

// void reverseString(string& s,int start) {
//     char temp;
//     int len = s.length();
//     for(int i=start;i<=((len-1-start)/2);i++){
//         temp=s[i];
//         s[i]=s[len-1-i];
//         s[len-1-i]=temp;
//         // cout<<s[i]<<endl; 
//     }        
// }

string reverseStr(string s, int k) {
    int len = s.length();
    int i,j,p;
    for( i=0;i<len;i+=2*k){
        if(i+k>len){
             p=i;
            j=len-1;
        }
        else{
            p=i;
            j=i+k-1;
        }
       

        while(j>p){
           swap(s[p],s[j]);
           p++;
           j--;
        }
    } 

    return s;
       
}

int main(){
string ans = reverseStr("abcrth",4);
cout<<ans;
}