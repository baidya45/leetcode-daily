#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    vector<vector<int>> ans;
    map<int, int> m;
    for (int i = 0; i < items1.size(); i++)
    {
        m[items1[i][0]] += items1[i][1];
    }
    for (int i = 0; i < items2.size(); i++)
    {
        m[items2[i][0]] += items2[i][1];
    }
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        vector<int> temp;
        temp.push_back((*it).first);
        temp.push_back((*it).second);
        ans.push_back(temp);
    }

    return ans;
}
int main()
{
    vector<vector<int>> v1 = {{1, 2}, {2, 3}};
    vector<vector<int>> v2 = {{1, 2}, {2, 3}};
    mergeSimilarItems(v1, v2);
}