#include<bits/stdc++.h>
using namespace std;


 bool isPossible(vector<int> arr, int n, int m,int mid){
    int studentCount =1,
    pageSum=0;
    for(int i=0;i<arr.size();i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m|| arr[i]>mid){
                return false;
            }
            else{
                pageSum=arr[i];
            }
        }
    }
    return true;
 }
int allocateBooks(vector<int> arr, int n, int m) {
    int sum =0;
    int ans=-1;
    for(int i = 0;i<arr.size();i++){
        sum+=arr[i];
    }
    int s=0;
    int e = sum;
    int mid = s+(e-s)/2;

    while (s<=e)
    {
        if(isPossible(arr,n,m,mid)){
           ans=mid;
           e=mid-1; 
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    return ans;
    
}

int main(){
vector<int> v ={10,20,30,40};
cout<<allocateBooks(v,4,2);
}