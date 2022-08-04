#include<bits/stdc++.h>
using namespace std;

 bool isAnagram(string s, string t) {
        map<char,int> map1,map2;
        for(auto i:s){
            map1[i]++;
            
        }
        for(auto i:t){
            map2[i]++;
        }
        
       if(map1==map2){
        return 1;
       }

       return 0;
    }

int main(){
    cout<<isAnagram("rice","cei");
}