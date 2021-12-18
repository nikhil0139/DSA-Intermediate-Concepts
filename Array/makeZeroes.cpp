// Given an matrix , if any 0 occcurs make all elements of that row and column equal to zero.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> v)
{

    int m = v.size(), n = v[0].size();
    vector<int> left, right;

    vector<vector<int>> ans = v;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 0)
            {
                left.push_back(i);
                right.push_back(j);
            }
        }
    }

    for (auto i : left)
    {
        for (int j = 0; j < n; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (auto j : right)
    {
        for (int i = 0; i < m; i++)
        {
            ans[i][j] = 0;
        }
    }

    return ans;
}

int main()
{

    vector<vector<int>> res = makeZeroes({{5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0} , {9, 8, 3, 4}});

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}