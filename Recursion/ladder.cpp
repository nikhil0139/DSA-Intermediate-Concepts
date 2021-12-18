// Given a number n, find the ways to climb up the ladder. You can climb 1, 2, 3 steps at a time.

#include <bits/stdc++.h>
using namespace std;

int ladder(int n)
{
    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    return (ladder(n - 1) + ladder(n - 2) + ladder(n - 3));
}

int main()
{

    int n;
    cin >> n;

    cout << ladder(n);

    return 0;
}