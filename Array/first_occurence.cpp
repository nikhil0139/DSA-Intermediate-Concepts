// Given an array, find the first repeating element of array.

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

    unordered_map<int, int> s;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        s[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[arr[i]] > 1)
        {
            ans = arr[i];
            break;
        };
    }

    cout << "First repeating element is " << ans << endl;

    return 0;
}