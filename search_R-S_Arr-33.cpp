#include<bits/stdc++.h>
using namespace std;

// int binary_search(int high,int low,int key,vector<int>& arr){
//     if(high>=low){
//         int mid = low + (high-low)/2; 
//         if(key>arr[mid]){
//             return binary_search(high,mid+1,key,arr);
//         }
//         else if(key<arr[mid]){
//             return binary_search(mid-1,low,key,arr);
//         }
//         else if(key==arr[mid]){ 
//             return mid;
            
//         }
//     }
//     return -1;
// }

// int search(vector<int>& nums, int target) {
//    int l = 0,h=nums.size()-1;
//    int max = 0;

//     for(int i =1;i<nums.size();i++){
//         if(nums[i]>nums[max]){
//             max=i;
//         }
//         if(nums[max]>nums[i+1] && nums[max]>nums[i-1]){
//             break;
//         }
//     }

//     int rindex=binary_search(h,max+1,target,nums);
//     int lindex=binary_search(max-1,l,target,nums);
//     if(target == nums[max]){
//         return max;
//     }
//     else if(lindex==-1 && rindex==-1){
//         return -1;
//     }
//     else if(lindex==-1)
//         return rindex;
//     else
//         return lindex;

//  

// optimised solution

  

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}



int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1])
    {//BS on second line
        return binarySearch(arr, pivot, n-1, k);
    }
    else
    {//BS on first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
    
}
