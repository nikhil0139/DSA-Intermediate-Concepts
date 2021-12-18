// Given an integer n, print how many ways you can reach from (0, 0) to (n-1, n-1) if you can only move right or down in a step.

// Mathematically it is,    (m + n - 2) / (m - 1)! (n - 1)!                   

#include <bits/stdc++.h>
using namespace std;

int countPath(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return 1;

    if (i >= n || j >= n)
        return 0;

    int ans = 0;

    ans += countPath(n, i + 1, j);
    ans += countPath(n, i, j + 1);

    return ans;
}

int main()
{

    int n;
    cin >> n;

    cout << countPath(n, 0, 0);

    return 0;
}