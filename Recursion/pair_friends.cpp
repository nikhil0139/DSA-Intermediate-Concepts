// Given an integer n, print how many ways n friends can be paired up or remain single.

#include <bits/stdc++.h>
using namespace std;

int pairFriends(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    return pairFriends(n - 1) + (n - 1) * pairFriends(n - 2);
}

int main()
{

    int n;
    cin >> n;

    cout << pairFriends(n);

    return 0;
}