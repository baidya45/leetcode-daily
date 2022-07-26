#include<bits/stdc++.h>
using namespace std;
double area(vector<int>a ,vector<int>b ,vector<int>c)
	{
	//abs(x1(y2-y3)+x2*(y3-y1)+x3*(y1-y2)) 
	// 12th standard matrix formula to calculate area of triangle given three points.
		return abs((a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1])));
	}
	double largestTriangleArea(vector<vector<int>>& pt) 
	{
		double ans=0;
		for(int i=0;i<pt.size()-2;i++)
		{
			for(int j=i+1;j<pt.size()-1;j++)
			{
				for(int k=j+1;k<pt.size();k++)
					ans=max(ans,area(pt[i],pt[j],pt[k]));
			}
		}
		return ans/2;
	}
int main(){
vector<vector<int>> m= {{9, 8, 7, 1},
                {7, 3, 0, 2},
                {9, 5, 3, 2},
                {6, 3, 1, 2}};
sort(m.begin(),m.end());
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<m[i][j]<<" ";
    }
    cout<<endl;
}
    
}