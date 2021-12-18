// Print the following patterns.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    //    Pattern-1

    //    * * * * *
    //    * * * * *
    //    * * * * *
    //    * * * * *

    int r, c;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    //    Pattern-2

    //    * * * * *
    //    *       *
    //    *       *
    //    *       *
    //    * * * * *

    int x, y;
    cin >> x >> y;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            if (i == 1 || j == 1 || i == x || j == y)
                cout << "*"
                     << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    //    Pattern-3

    //    * * * * *
    //    * * * *
    //    * * *
    //    * *
    //    *

    int n1;
    cin >> n1;

    for (int i = n1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    //    Pattern-4

    //            *
    //          * *
    //        * * *
    //      * * * *
    //    * * * * *

    int n2;
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        for (int j = 1; j <= n2 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}