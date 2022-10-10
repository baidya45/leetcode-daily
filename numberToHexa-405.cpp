#include<bits/stdc++.h>
using namespace std;

string toHex(int num) {
        string ans="";
        int d;
        while(num){
            d=num%16;
            switch(d){
                case 10:
                    ans='a'+ans;
                        break;
                case 11:
                    ans='b'+ans;
                        break;
                case 12:
                    ans='c'+ans;
                        break;
                case 13:
                    ans='d'+ans;
                    break;
                case 14:
                    ans='e'+ans;
                    break;
                case 15:
                    ans='f'+ans;
                    break;
                default:
                    break;
            }
            if(d<10){
                ans=to_string(d)+ans;
            }
            num=num/16;
        }
        
        
        return ans;
    }

int main(){
    cout<<toHex(266575);
}