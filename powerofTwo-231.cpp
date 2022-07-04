#include<bits/stdc++.h>

using namespace std;

 bool isPowerOfTwo(int n) {
        for(int i =0;i<32;i++){
            int ans = pow(2,i);
            if(ans==n)
                return true;
        }

        return false;
    }


int main(){
bool ans = isPowerOfTwo(8);
cout<<ans;

}