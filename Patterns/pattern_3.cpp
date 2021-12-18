// Print the following patterns.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pattern-9

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    // 1 0 1 0 1

    int n1;
    cin >> n1;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1"
                     << " ";
            else
                cout << "0"
                     << " ";
        }
        cout << endl;
    }

    // Pattern-10

    //       * * * *
    //     * * * *
    //   * * * *
    // * * * *

    int n2;
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n2 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= n2; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    // Pattern-11

    //      1
    //     1 2
    //    1 2 3
    //   1 2 3 4
    //  1 2 3 4 5
    // 1 2 3 4 5 6

    int n3;
    cin >> n3;

    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= n3 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    // Pattern-12

    //         1
    //       2 1 2
    //     3 2 1 2 3
    //   4 3 2 1 2 3 4
    // 5 4 3 2 1 2 3 4 5

    int n4;
    cin >> n4;

    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= n4 - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}