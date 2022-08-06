#include<bits/stdc++.h>
using namespace std;
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
     Solution(){                                                    //this is code for api
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int guessNumber(int n) {
         int l=1,h=n;
        int mid=-1;
        while(l<=h){
            
            mid = l+(h-l)/2;
            
            int ans = guess(mid);       //guess is in api
            if(ans==0) break;
            else if(ans==1) l=mid+1;
            else h=mid-1;
        }
        
        return mid;
    }
};