// Given an integer n and a value, print the vector of n size with incremented values and negative of those values using recursion.
// This is the basic example how backtracking works.

// Example :                       n = 5,  value = 1
// Output:                         1 2 3 4 5              // print in recursive function
//                                -1 -2 -3 -4 -5          // print in main function

#include <bits/stdc++.h>
using namespace std;

void fillArray(vector<int> &arr, int i, int n, int value)
{
    if (i == n)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
        return;
    }

    arr[i] = value;
    fillArray(arr, i + 1, n, value + 1);

    arr[i] = -1 * arr[i];
}

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);

    fillArray(arr, 0, n, 1);

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}