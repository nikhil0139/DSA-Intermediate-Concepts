// Given a integer n, find the factorial of the number n.

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;

    return (n * factorial(n - 1));
}

int main()
{

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << "The factorial of the given number " << n << " is : " << ans << endl;

    return 0;
}