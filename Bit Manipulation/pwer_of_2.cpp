// Given a number n, print the XOR from 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = n && !(n & n - 1);

    if (ans != 0)
    {
        cout << n << " is a power of two." << endl;
    }

    else
    {
        cout << n << " is not a power of two." << endl;
    }

    return 0;
}