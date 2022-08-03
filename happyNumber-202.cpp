#include<bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
         int ans=0;
        int temp=0;
        while(ans!=2&&ans!=3&&ans!=4&&ans!=5&&ans!=6&&ans!=8&&ans!=9){
            temp+=(n%10)*(n%10);
            n=n/10;
            if(n==0){
                ans=temp;
                n=temp;
                temp=0;
            }
            if(ans==1){
                break;
            }
        }
        return ans==1?1:0;
    }

int main(){
    int arr[]={12,2,45,6,7,42,67,8};
    for(int i=0;i<8;i++){
    cout<<isHappy(arr[i])<<" "<<arr[i]<<endl;

    }
}