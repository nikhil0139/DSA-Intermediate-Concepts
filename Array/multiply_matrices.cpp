// Given two matrices, find the product of two matrices.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    int x, y, z;
    cin >> x >> y >> z;

    vector<vector<int>> a(x, vector<int>(y));
    vector<vector<int>> b(y, vector<int>(z));
    vector<vector<int>> c(x, vector<int>(z));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < z; j++)
        {
            for (int k = 0; k < y; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < z; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}