#include <bits/stdc++.h>

using namespace std;

int sqrtN(long long int N)
{
    if (N == 1 || N == 0)
    {
        return N;
    }
    long long int s,e,mid,ans=-1;
    s=1;
    e=N;
    while(s<=e){
    mid=s+(e-s)/2;
        // cout<<s<<" "<<e<<" "<<mid<<endl;
        if(mid*mid>N){
            e=mid-1;
        }
        else if(mid*mid<N){
            ans=mid;
            s=mid+1;

        }
        else if(mid*mid==N){
            return mid;
        }
        // mid=s+(e-s)/2;
    }
    return ans;
    
    // Write your code here.
}

int main()
{
    cout<<sqrtN(604937061729);
    
}