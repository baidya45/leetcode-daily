#include<bits/stdc++.h>
using namespace std;

 int countPrimes(int n) {
        vector<int> arr(n+1,0);
        int count=0;
        
        for(int i=2;i<=n;i++){
            if(arr[i]==0){
                count++;
                for(int j=i+i;j<=n;j+=i){
                arr[j]=1;
                }
            }
            }
            
        
        
        return count;
    }
int main(){
    cout<<countPrimes(2);
}