#include <bits/stdc++.h>
using namespace std;

// need to recheck

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    vector<int> temp;
    sort(nums1.begin(),nums1.end());
    int i = 0, j = 0;
    while (i < m ){
        if(nums1[i]==nums1[i+1]){
            i++;
        }
        if(nums1[i]==nums2[j]){
            temp.push_back(nums1[i]);
            nums2[j]=INT_MIN;
            i++;
            j=0;
            
        }
        else if(j==n-1){
            j=0;
            i++;
        }
        else{
            j++;
        }
    }
    
        

    return temp;
}

int main()
{
    vector<int> v1, v2, ans;
    v1 = {1, 2,2,1};
    v2 = {2, 2};
    ans = intersect(v1, v2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}