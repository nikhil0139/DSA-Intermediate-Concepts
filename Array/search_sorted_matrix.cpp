// Given a sorted matrix, search that the given element is present in matrix or not.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;

    vector<vector<int>> a(x, vector<int>(y));

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
    }

    int target;
    cin >> target;

    int i = x - 1, j = 0;

    while (j <= y - 1 && i >= 0)
    {
        if (a[i][j] == target)
        {
            cout << "Element found!!" << endl;
            exit(0);
        }
        else if (a[i][j] > target)
        {
            i--;
        }
        else
        {
            j++;
        }
    }

    cout << "Element not found!!" << endl;

    return 0;
}