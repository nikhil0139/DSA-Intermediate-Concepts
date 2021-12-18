// Given a integer n, print from 1 to n in decreasing and increasing order .

#include <bits/stdc++.h>
using namespace std;

void decreasing(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    decreasing(n - 1);
}

void increasing(int n)
{
    if (n == 0)
    {
        return;
    }

    increasing(n - 1);
    cout << n << " ";
}

int main()
{

    int n;
    cin >> n;

    cout << "The numbers from 1 to " << n << " in increasing order : ";
    increasing(n);

    cout << endl;

    cout << "The numbers from 1 to " << n << " in decreasing order : ";
    decreasing(n);

    cout << endl;

    return 0;
}