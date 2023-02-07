#include <bits/stdc++.h>
using namespace std;
int firstocc(vector<int> &arr, int n, int x)
{
    int h = arr.size() - 1, l = 0;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (h >= l)
    {
        if (arr[mid] == x)
        {
            ans=mid;
            h = mid - 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}
int lastocc(vector<int> &arr, int n, int x)
{
    int h = arr.size() - 1, l = 0;
    int mid = l + (h - l) / 2;
    int ans = -1;
    while (h >= l)
    {
        if (arr[mid] == x)
        {
            ans=mid;
            l = mid + 1;
        }
        else if (arr[mid] > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
        mid = l + (h - l) / 2;
    }
    return ans;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
    // Write your code here.
    pair<int,int> ans;
    ans.first=firstocc(arr,n,x);
    ans.second=lastocc(arr,n,x);

    return ans;
}

int main()
{
}