#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if(n==1){
        return false;
    }
    for (int i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
            return false;
        else
            continue;
    }
    return true;
}

int countPrimeSetBits(int left, int right)
{
    int ans = 0, temp = 0;
    for (int i=left; i <= right; i++)
    {
        int val = i;
        // cout<<"in loop"<<endl;
        while (val)
        {
            if (val & 1 == 1)
            {
                temp += 1;
            }
            val = val >> 1;
        }
        // cout<<temp<<endl;
        if (isPrime(temp))
        {
            ans += 1;
        }
        else
        {
            ans = ans;
        }
        temp = 0;
    }

    return ans;
}

int main()
{
    int ans;
    ans = countPrimeSetBits(6, 10);
    // bool ans = isPrime(33);
    cout << ans;
}