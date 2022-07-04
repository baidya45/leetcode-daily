#include<bits/stdc++.h>

using namespace std;

uint32_t reverseBits(uint32_t n){
string res="";
int bit;
int ans=0;
while(n){
bit=(n&1);
res+=to_string(bit);
n=n>>1;
}
int len = res.length();
for(int i = res.length()-1;i>=0;i--){
ans+=(res[i]-'0')*pow(2,len-i-1);
}
return ans;
}

int main(){
uint32_t n, ans;

ans = reverseBits(9);
cout<<ans;

}