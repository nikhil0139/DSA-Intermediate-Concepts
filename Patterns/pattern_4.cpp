// Print the following patterns.

#include <bits/stdc++.h>
using namespace std;

// for pattern-15
int fac(int n)
{
    int pro = 1;
    for (int i = 2; i <= n; i++)
    {
        pro *= i;
    }
    return pro;
}

int main()
{
    // Pattern=13

    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *
    // * * * * * * *
    //   * * * * *
    //     * * *
    //       *

    int n1;
    cin >> n1;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (int i = n1; i >= 1; i--)
    {
        for (int j = 1; j <= n1 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    // Pattern-14

    //     *       *       *       *
    //   *   *   *   *   *   *   *   *
    // *       *       *       *       *

    int n2;
    cin >> n2;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n2; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
                cout << "*"
                     << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // Pattern-15

    //     1
    //    1 1
    //   1 2 1
    //  1 3 3 1
    // 1 4 6 4 1

    int n3;
    cin >> n3;

    for (int i = 1; i <= n3; i++)
    {
        int x = 1;
        for (int j = 1; j <= n3 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << x << " ";
            x = x * (i - k) / k;
        }
        cout << endl;
    }

    // --> OR <--

    for (int i = 0; i < n3; i++)
    {
        for (int j = 1; j <= n3 - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            int x = fac(i) / (fac(k) * fac(i - k));
            cout << x << " ";
        }
        cout << endl;
    }

    // Pattern-16

    // * * * * * * *
    //   * * * * *
    //     * * *
    //       *
    //       *
    //     * * *
    //   * * * * *
    // * * * * * * *

    int n4;
    cin >> n4;

    for (int i = n4; i >= 1; i--)
    {
        for (int j = 1; j <= n4 - i; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n4; i++)
    {
        for (int j = 1; j <= n4 - i; j++)
        {
            cout << "  ";
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}
