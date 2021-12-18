// Given an array, print all the subsets of the array.

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

    int mask = 1 << n;

    for (int i = 0; i < mask; i++)
    {
        vector<int> v;

        for (int bit = 0; bit < n; bit++)
        {
            if (i & (1 << bit))
            {
                v.push_back(arr[bit]);
            }
        }

        cout << "{";

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << "}";


        cout << endl;
    }

    return 0;
}