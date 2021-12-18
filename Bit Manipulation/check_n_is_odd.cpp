// Check if a number is odd or not using bit property.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (n & 1)
        cout << n << " is odd" << endl;
    else
        cout << n << " is even" << endl;

    return 0;
}