// In a binary number, check if the i-th bit is 1 or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i;
    cin >> n >> i;

    int mask = 1 << i;

    if (n & mask)
    {
        cout << "Yes, " << i << "-th bit is set" << endl;
    }
    else
    {
        cout << "No, " << i << "-th bit is not set" << endl;
    }

    return 0;
}