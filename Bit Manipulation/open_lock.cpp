// You have a lock (like a clock) which is marked as 0 90 180 270 360.
// Given an array of integers, find if you can reach at starting using all integers.
// You can move in any direction (clockwise or anti-clockwise)

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

    int mask = 1 << n, flag = 0, sum;

    for (int i = 0; i < mask; i++)
    {
        vector<int> v;
        sum = 0;

        for (int bit = 0; bit < n; bit++)
        {
            if (i & (1 << bit))
            {
                sum += arr[bit];
            }
            else
            {
                sum -= arr[bit];
            }
        }

        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "Yes the lock can be opened" << endl;
    else
        cout << "No the lock cannot be opened" << endl;

    return 0;
}