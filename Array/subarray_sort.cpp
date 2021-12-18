// Given an arry of integers, find the subarray indices that needs to be sorted to make the entire array sorted.

#include <bits/stdc++.h>
using namespace std;

bool outOfOrder(vector<int> arr, int i)
{
    int n = arr.size();

    if (i == 0)
        return arr[i] > arr[i + 1];
    else if (i == n - 1)
        return arr[i] < arr[i - 1];
    else
        return (arr[i] > arr[i + 1] || arr[i] < arr[i - 1]);
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

    int low = INT_MAX, high = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (outOfOrder(arr, i) == true)
        {
            low = min(low, arr[i]);
            high = max(high, arr[i]);
        }
    }

    if (low == INT_MAX)
        cout << "-1 and -1" << endl;

    else
    {
        int left = 0, right = n - 1;

        while (low >= arr[left])
            left++;

        while (high <= arr[right])
            right--;

        cout << left << " and " << right << endl;
    }

    return 0;
}