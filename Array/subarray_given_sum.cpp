// Given an arry of integers, we have to print the subarrays whose sum is equal to x.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    int add = 0, i = 0, j = 0;

    while (j < n && add + arr[j] <= x)
    {
        add += arr[j];
        j++;
    }

    if (add == x)
    {
        cout << i << " " << j - 1 << endl;
        exit(0);
    }

    while (j < n)
    {
        add += arr[j];
        while (add > x)
        {
            add -= arr[i];
            i++;
        }

        if (add == x)
        {
            cout << i << " " << j << endl;
            exit(0);
        }
    }

    cout << "No subarray found whose sum is " << x << endl;

    return 0;
}