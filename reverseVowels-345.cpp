#include<bits/stdc++.h>

using namespace std;

 bool isVowel(char c) {
        
       if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                return true;
            }
        else
            return false;
    }
    
string reverseVowels(string s) {
     int len = s.length();
     int i=0,j=len-1;
     while(i<j){
        while(i<j && !isVowel(s.at(i))){
            i++;
        }
        while(i<j && !isVowel(s.at(j))){
            j--;
        }
        if(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
     }
     

     return s;  
}


int main(){
    string s = "iotmqauz";
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
 string ans = reverseVowels(s);
 cout<<endl<<ans;
}