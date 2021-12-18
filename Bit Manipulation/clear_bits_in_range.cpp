// Given a number, remove the bits in range from i to j.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i, j;
    cin >> n >> i >> j;

    int a = -1 << (j+1);
    int b = i << i - 1;

    int mask = a|b;

    n = n & mask;

    bitset<10>x = n;

    cout<<x;

    return 0;
}