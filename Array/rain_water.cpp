// Given an array, find the total water that can be collected b/w the bars whose heights are given in the array.

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

    int add = 0;

    vector<int> left(n);
    left[0] = arr[0];
    vector<int> right(n);
    right[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
        right[n - i - 1] = max(right[n - i], arr[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        add += min(left[i], right[i]) - arr[i];
    }

    cout << "Total rainwater collected is " << add << endl;

    return 0;
}

