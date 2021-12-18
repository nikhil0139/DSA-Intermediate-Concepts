// Given an array of integers, find that the array is sorted or not.

#include <bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;

    if (arr[0] < arr[1] && check_sorted(arr + 1, n - 1))
        return true;

    return false;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (check_sorted(arr, n))
        cout << "The array is sorted" << endl;
    else
        cout << "The array is not sorted" << endl;

    return 0;
}