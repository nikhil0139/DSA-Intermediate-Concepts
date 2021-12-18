// Given an arry of integers, we have to find the pair whose sum is equal to the given target sum.

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

    unordered_set<int> s;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.find(x - arr[i]) != s.end())
        {
            cout << "Pair for sum " << x << " is " << arr[i] << " and " << x - arr[i] << endl;
            flag = 1;
            break;
        }
        else
            s.insert(arr[i]);
    }

    if (flag == 0)
        cout << "No such pair exist" << endl;

    return 0;
}