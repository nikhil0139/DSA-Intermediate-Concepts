// GIven a matrix, find the transpose of the matrix.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}