// Given n integers, place n queens on n X n chessboard so that no two queens attack each other.

#include <bits/stdc++.h>
using namespace std;

int res[20][20] = {0};

bool canPlace(int x, int y, int n)
{
    for (int t = 0; t < n; t++)
    {
        if (res[t][y] == 1)
            return false;
    }

    int i = x;
    int j = y;

    while (i >= 0 && j >= 0)
    {
        if (res[i][j] == 1)
            return false;
        i--;
        j--;
    }

    i = x;
    j = y;

    while (i >= 0 && j < n)
    {
        if (res[i][j] == 1)
            return false;
        i--;
        j++;
    }

    return true;
}

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

bool NQueen(int n, int i)
{
    if (i == n)
    {
        print(n);
        return true;
    }

    for (int j = 0; j < n; j++)
    {
        if (canPlace(i, j, n))
        {
            res[i][j] = 1;
            bool temp = NQueen(n, i + 1);
            if (temp)
            {
                return true;
            }
            res[i][j] = 0;
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    NQueen(n, 0);

    return 0;
}