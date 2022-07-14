#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    int lenS = s.length();
    int lenP = part.length();
    // // cout<<lenS<<lenP;
    // int i=0,j=0;
    // string temp;
    // for(i=0;i<=lenS-lenP;i++){
    //     temp=s.substr(i,lenP);
    //     if(temp==part){
    //         s.erase(i,lenP);
    //         // cout<<s<<endl;
    //         if(i<lenP){
    //             i=-1;
    //         }
    //         else{
    //             i-=lenP;
    //         }
    //         lenS=s.length();
    //     }
          
        
    // }
    // return s;
    while(lenS!=0 && s.find(part)<lenS){
        s.erase(s.find(part),lenP);
    }
    return s;
}
int main()
{
    string s = "eemckxmckx";
    cout<<removeOccurrences(s,"emckx");
}