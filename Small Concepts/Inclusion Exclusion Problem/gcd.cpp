// Find GCD of two numbers a and b.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " are : ";

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << a << endl;
    return 0;
}
