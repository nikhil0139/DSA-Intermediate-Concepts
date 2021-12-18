// Given two numbers left and right, print the XOR from left to right.

#include <bits/stdc++.h>
using namespace std;

int XOR(int n)
{
    int ans = 0;
    if (n % 4 == 0)
        ans = n;
    else if (n % 4 == 1)
        ans = 1;
    else if (n % 4 == 2)
        ans = n + 1;
    else if (n % 4 == 3)
        ans = 0;

    return ans;
}

int main()
{

    int left, right;
    cin >> left >> right;

    int l = XOR(left - 1);
    int r = XOR(right);

    int result = l ^ r;

    cout << "The XOR of all the numbers from " << left << " to " << right << " is " << result << endl;

    return 0;
}