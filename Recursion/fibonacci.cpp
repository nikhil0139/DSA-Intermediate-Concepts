// Given a integer n, find the n-th fibonacci number in the fibonacci series.

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;

    return (fibonacci(n-1) + fibonacci(n - 2));
}

int main()
{

    int n;
    cin >> n;

    int ans = fibonacci(n);

    cout << "The " << n << "-th fibonacci number is : " << ans << endl;

    return 0;
}