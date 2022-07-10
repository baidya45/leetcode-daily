#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    char c;
    int len = s.length();
    int val[len], i;
    int sum = 0,curr;
    for (i = 0; i < len; i++)
    {
        c = s[i];
        switch (c)
        {
        case 'I':
            val[i] = 1;
            break;
        case 'V':
            val[i] = 5;
            break;
        case 'X':
            val[i] = 10;
            break;
        case 'L':
            val[i] = 50;
            break;
        case 'C':
            val[i] = 100;
            break;
        case 'D':
            val[i] = 500;
            break;
        case 'M':
            val[i] = 1000;
            break;

        default:
            val[i] =-1;
            break;
        }
    }
    for(i=0;i<len-1;i++){
        if(val[i]<val[i+1]){
            sum-=val[i];
        }
        else{
            sum+=val[i];
        }
    }

    return sum+val[len-1];
}

int main()
{
    string s = "MCMXCIV";
    cout<<endl<<romanToInt(s);
}