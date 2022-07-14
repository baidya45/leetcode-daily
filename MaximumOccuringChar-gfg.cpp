#include <bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
{
    int max=0;
    int len=str.length();
    int arr[26]={0};
    for(int i=0;i<len;i++){
        arr[(str[i]-97)]++;
    }
    for(int i =1;i<26;i++){
        if(arr[max]<arr[i])
            max=i;
    }
    return char(max+97);
}
int main()
{
   cout<<getMaxOccuringChar("aababbbcgdtae");

}