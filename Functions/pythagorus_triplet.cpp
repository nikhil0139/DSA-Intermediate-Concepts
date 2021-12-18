// Given three numbers, find whether it is a pythagorus triplet or not.

#include <bits/stdc++.h>
using namespace std;

bool check_triplet(int a, int b, int c)
{
    //  a * a + b * b  =  c * c
    //      lhs            rhs

    int m = max(a, max(b, c));

    int lhs = a * a + b * b + c * c - m * m;
    int rhs = m * m;

    if (lhs == rhs)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (check_triplet(a, b, c))
    {
        cout << "Yes, given values are pythagorus triplet" << endl;
    }
    else
    {
        cout << "No, given values are not pythagorus triplet" << endl;
    }
}