// Given a number, remove the last set bit.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    n = n & (n-1);

    bitset<10>x = n;

    cout<<x;

    return 0;
}