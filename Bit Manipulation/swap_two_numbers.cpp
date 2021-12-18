// Given two numbers, swap the numbers using XOR property.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    cout << "The numbers before swapping are : " << a << " and " << b << endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "The numbers after swapping are : " << a << " and " << b << endl;

    return 0;
}