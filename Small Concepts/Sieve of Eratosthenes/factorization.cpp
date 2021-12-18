// Given a number n, print the factors of n.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n, 0);

    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (arr[j] == j)
                    arr[j] = i;
            }
        }
    }

    cout << "Factors of " << n << " are : ";

    while (n != 1)
    {
        cout << arr[n] << " ";
        n = n / arr[n];
    }

    return 0;
}