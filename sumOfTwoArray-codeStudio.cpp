#include<bits/stdc++.h>
using namespace std;
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int sum1 =0,sum2=0;
    int ans;
    vector<int> v;
    for(int i = n-1;i>=0;i--){
        sum1+=pow(10,n-1-i)*a[i];
    }
    for(int i = m-1;i>=0;i--){
        sum2+=pow(10,m-1-i)*b[i];
    }
    ans = sum1+sum2;
    while(ans){
        v.push_back(ans%10);
        ans=ans/10;
    }
    reverse(v.begin(),v.end());
    return v;
}
int main(){

}