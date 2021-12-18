// Given a number n, find the prime numbers between 1 to n.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }

    cout << "Prime numbers from 1 to " << n << " are : ";

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}