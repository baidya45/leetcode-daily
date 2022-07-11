#include<bits/stdc++.h>
using namespace std;


// using stack**************

 int minimumDeletions(string s) {
    stack<char>st;
        int n=s.size();
        int count=0;
        for(int i=0;i<s.size();i++){
            char t=s[i];
            if(!st.empty() && st.top()=='b' && t=='a'){
                st.pop();
                count++;
            }
            else{
            st.push(t);
            }
        }
        return count;
}

int main(){
    cout<<('b'-'a');
}