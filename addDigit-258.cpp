#include<bits/stdc++.h>
using namespace std;
int addDigits(int num) {
    int sum=0; 
    while(num!=0){
        sum+=(num%10);
        num=num/10;
        if(num==0){
            num=sum;
            sum=0;
            if(num/10==0){
                break;
            }
        }
    }  
    return num;    
}
int main(){
cout<<addDigits(38);
}