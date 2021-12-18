// Given an integer n, print how many ways tiles can be arranged in a 2 X n  grid. Size of each tile is 2 X 1/

#include <bits/stdc++.h>
using namespace std;

int tilingWays(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{

    int n;
    cin >> n;

    cout << tilingWays(n);

    return 0;
}