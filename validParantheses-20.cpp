#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        bool ans=true;
        for(int i = 0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
                
                
            }
           else if(!st.empty()&& s[i]==')'&& st.top()=='('){
                st.pop();
                
            }
            else if(!st.empty()&& s[i]=='}'&& st.top()=='{'){
                st.pop();
                
            }
            else if(!st.empty()&& s[i]==']'&& st.top()=='['){
                st.pop();
                
            }
            else{
                ans = false;
            }
            
        }
        if(!st.empty()){
            ans = false;

        }
        return ans;
}

int main(){
    string s = "{{}()";
    cout<<isValid(s);
}