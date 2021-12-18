// Given a number n, print the XOR from 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int ans = 0;

    if (n % 4 == 0)
        ans = n;
    else if (n % 4 == 1)
        ans = 1;
    else if (n % 4 == 2)
        ans = n + 1;
    else if (n % 4 == 3)
        ans = 0;

    cout << "The XOR of all the numbers from 1 to " << n << " is " << ans << endl;

    return 0;
}