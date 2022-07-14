#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
    int sum=0;
    string ans;
    int n = num1.length();
    int m = num2.length();
    for(int i=n-1;i>=0;i--){
        sum+=pow(10,n-1-i)*(num1[i]-'0');
        // cout<<sum<<" ";
    }    
    for(int i=m-1;i>=0;i--){
        sum+=pow(10,m-1-i)*(num2[i]-'0');
        // cout<<sum<<" ";
    }    
    if(sum==0){
        ans="0";
    }
    while(sum){
        ans.append(to_string(sum%10));
        // cout<<ans<<" ";
        sum=sum/10;
    }
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){
    string a = "100",b="123";
    cout<<addStrings(a,b);
}