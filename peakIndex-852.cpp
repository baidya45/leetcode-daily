#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
      int s = 0;
       int h = arr.size()-1;
       int mid = s+(h-s)/2;
       while(s<h){
        if( arr[mid]<arr[mid+1]){
            s= mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            h=mid;
        }
        
        mid = s+(h-s)/2;
       } 

       return mid;
}

int main(){
    vector<int> arr = {5,6,8,10,1,2,3,4};
cout<< peakIndexInMountainArray(arr);
}




//  int s = 0;
//        int h = arr.size()-1;
//        int mid = s+(h-s)/2;
//        while(s<=h){
//         if( arr[mid]<arr[mid+1]){
//             s= mid+1;
//         }
//         else if(arr[mid]>arr[mid+1]){
//             h=mid-1;
//         }
        
//         mid = s+(h-s)/2;
//        } 

//        return mid;