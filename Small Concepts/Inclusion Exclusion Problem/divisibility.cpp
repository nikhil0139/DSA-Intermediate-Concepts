// Find all the numbers between 1 to n that are divisible by a and b.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, a, b;
    cin >> n >> a >> b;

    int x = n / a, y = n / b, z = n / (a * b);

    cout << "Numbers between 1 to " << n << " which are divisible by " << a << " or " << b << " are : " << x + y - z;

    return 0;
}
