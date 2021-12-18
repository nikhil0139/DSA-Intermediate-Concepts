// GIven the matrix, print thr matrix in spiral order.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    int rs = 0, re = n - 1, cs = 0, ce = m - 1;

    while (rs <= re && cs <= ce)
    {
        // for row start
        for (int i = cs; i <= ce; i++)
        {
            cout << v[rs][i] << " ";
        }
        rs++;

        for (int j = rs; j <= re; j++)
        {
            cout << v[j][ce] << " ";
        }
        ce--;

        if (rs <= re)
        {

            for (int k = ce; k >= cs; k--)
            {
                cout << v[re][k] << " ";
            }
        }
        re--;

        if (cs <= ce)
        {
            for (int l = re; l >= rs; l--)
            {
                cout << v[l][cs] << " ";
            }
        }
        cs++;
    }

    return 0;
}