// Print the following patterns.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Pattern-5

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5

    int n1;
    cin >> n1;

    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    // Pattern-6

    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    int n2;
    cin >> n2;

    int k = 1;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    // Pattern-7

    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *

    int n3;
    cin >> n3;

    for (int i = 1; i <= n3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 1; k <= 2 * n3 - 2 * i; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    for (int i = n3; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        for (int k = 1; k <= 2 * n3 - 2 * i; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    // Pattern-8

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1

    int n4;
    cin >> n4;

    for (int i = n4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}