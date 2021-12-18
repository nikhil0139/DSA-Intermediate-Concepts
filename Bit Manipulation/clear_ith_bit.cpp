// In a binary number, clear the i-th bit and print the number.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, i;
    cin >> n >> i;

    int mask = 1 << i;

    n = n & ~mask;

    bitset<10>x = n;

    cout<<x;

    return 0;
}