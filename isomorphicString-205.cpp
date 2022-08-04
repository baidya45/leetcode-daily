#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
         // Two maps for s,t strings
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        
        for(int i =0 ;i < s.length(); i++){
            // insert each character if string s and t into seperate map
            map1[s[i]] = i+1;
            map2[t[i]] = i+1;
            cout<<s[i]<<" "<<map1[s[i]]<<"  "<<t[i]<<" "<<map2[t[i]]<<endl;
            
        }

        cout<<"---------------"<<endl;
        
        for(int i =0 ;i < s.length(); i++){
            // compare the maps if not equal return false;
            // cout<<map1[s[i]]<<" "<<map2[t[i]]<<endl;
            cout<<s[i]<<" "<<map1[s[i]]<<"  "<<t[i]<<" "<<map2[t[i]]<<endl;
        }
        return true;
    }

int main(){
    isIsomorphic("foo","bar");
}