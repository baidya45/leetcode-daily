#include <bits/stdc++.h>
using namespace std;


// bruteforce approach
// int sumOfFlooredPairs(vector<int> &nums)
// {
//     int n = nums.size();
//     int i, j, sum =n;
//     for (i = 0; i < n; i++)
//     {
//         j = i + 1;
//         while (j < n)
//         {
//             sum += floor(nums[i] / nums[j]);
//             sum += floor(nums[j] / nums[i]);
//             j++;
//         }
//     }
//     return sum;
// }

// optimal approach
int sumOfFlooredPairs(vector<int> &nums)
{

}

int main()
{
    vector<int> v ={7,7,7,7,7,7,7};
    cout<<sumOfFlooredPairs(v);
}