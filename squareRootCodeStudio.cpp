#include <bits/stdc++.h>

using namespace std;

int sqrtN(long long int N)
{
    if (N == 1 || N == 0)
    {
        return N;
    }
    long long int s,e,mid;
    s=0;
    e=N/2;
    mid=s+(e-s)/2;
    while(s<e){
        if(mid*mid>N){
            e=mid;
        }
        else if(mid*mid<N){
            s=mid;
        }
        else if(mid*mid==N){
            return mid;
        }
    }
    return e;
    
    // Write your code here.
}

int main()
{
    cout<<sqrtN(1);
}