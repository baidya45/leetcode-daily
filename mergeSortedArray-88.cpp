#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int temp[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            temp[k++]=nums1[i++];
        }
        else{
            temp[k++]=nums2[j++];
        }
    }
    for(;i<m;i++){
        temp[k++]=nums1[i];
    }
    for(;j<n;j++){
        temp[k++]=nums2[j];
    }
    for(int i=0;i<m+n;i++){
        nums1[i]=temp[i];
        cout<<nums1[i]<<" ";
    }
}

int main()
{
    vector<int> v1,v2;
    v1={1,2,3,0,0,0};
    v2={2,5,6};
    merge(v1,3,v2,3);
}