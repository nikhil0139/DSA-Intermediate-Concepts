// Given integers a and n, calculate a to the power n .

#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if (n == 1)
        return a;
    return (a * power(a, n - 1));
}

int fast_power(int a, int n)
{
    if (n == 0)
        return 1;

    int temp = fast_power(a, n / 2);
    int sol = temp * temp;
    if (n & 1)
    {
        return a * sol;
    }
    else
    {
        return sol;
    }
}

int main()
{

    int a, n;
    cin >> a >> n;

    cout << a << " to the power " << n << " = " << power(a, n) << endl;

    cout << a << " to the power " << n << " = " << fast_power(a, n);

    return 0;
}