
#include <bits/stdc++.h>
using namespace std;
#define n 5

vector<vector<int>> v = {{1, 0, 0, 0, 0},
                         {1, 1, 0, 1, 0},
                         {0, 1, 1, 1, 0},
                         {0, 0, 0, 1, 0},
                         {1, 1, 1, 1, 1}};

vector<vector<int>> ans(5, vector<int>(5));

bool isSafe(int x, int y)
{
    if (x >= 0 && x < n && y >= 0 && y < n && v[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        ans[x][y] = 1;
        return true;
    }

    if (isSafe(x, y))
    {
        ans[x][y] = 1;
        if (ratInMaze(x + 1, y))
            return true;
        if (ratInMaze(x, y + 1))
            return true;
        ans[x][y] = 0;
        //return false;
    }
    return false;
}

int main()
{

    ratInMaze(0, 0);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}