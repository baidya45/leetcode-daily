#include <bits/stdc++.h>
using namespace std;

bool isBoomerang(vector<vector<int>> &points)
{
    float m = (float)(points[1][1] - points[0][1]) / (float)(points[1][0] - points[0][0]);
    float temp;
    for (int i = 1; i < points.size() - 1; i++)
    {
        float xdiff = (float)(points[i + 1][0] - points[i][0]);
        float ydiff = (float)(points[i + 1][1] - points[i][1]);
        if(xdiff==0){
            temp=0;
        }
        else{
         temp = ydiff / xdiff;

        }

    }
}

int main()
{
    vector<vector<int>> v = {{2, 3}, {1, 1}, {1, 1}};
    cout << isBoomerang(v);
}