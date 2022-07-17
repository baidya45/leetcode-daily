#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    int len=s.length();
    int i =0;
    while(i<len-1){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            len=s.length();
            if(i>0){
                i--;
            }
        }
        else{
            i++;
        }
    }

    return s;
}
int main()
{
}