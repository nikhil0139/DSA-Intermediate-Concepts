// Given an array of n integers, find the count of number of subsets whose sum is equal to x.

#include <bits/stdc++.h>
using namespace std;

int subsetSumX(vector<int> arr, int n, int i, int x)
{
    if (i == n)
    {
        if (x == 0)
            return 1;
        else
            return 0;
    }

    int a = subsetSumX(arr, n, i + 1, x - arr[i]);
    int b = subsetSumX(arr, n, i + 1, x);
    return a + b;
}

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

    cout << subsetSumX(arr, n, 0, x);

    return 0;
}