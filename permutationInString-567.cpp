#include <bits/stdc++.h>
using namespace std;
bool check(int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
        
    }
    return 1;
}
bool checkInclusion(string s1, string s2)
{
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        count1[(s1[i]-'a')]++;
    }
    int i=0;
    int k = s1.length();
    int count2[26]={0};
    while(i<k && i<s2.length()){
        count2[(s2[i]-'a')]++;
        i++;
    }
    if(check(count1,count2))
        return 1;
    
    while(i<s2.length()){
        count2[(s2[i]-'a')]++;
        count2[(s2[i-k]-'a')]--;
        if(check(count1,count2)){
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
}