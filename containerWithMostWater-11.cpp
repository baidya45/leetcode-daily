#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
   int Max=0;
        int l=0,h=height.size()-1;
        while(l<h){
            int temp;
            temp=min(height[l],height[h])*(h-l);
            Max=max(temp,Max);
            if(height[l]<height[h]){
                l++;
            }
            else{
                h--;
            }
        }

    return Max;      
}

int main(){

}