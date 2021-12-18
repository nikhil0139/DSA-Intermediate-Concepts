// Given an array, find the index of last occurence of key in the array.

#include <bits/stdc++.h>
using namespace std;

int last_occurence(int arr[], int n, int key)
{
    if (n == 0)
        return -1;

    int idx = last_occurence(arr + 1, n - 1, key);

    if (idx == -1)
    {
        if (arr[0] == key)
            return 0;
        else
            return -1;
    }

    else
    {
        return idx + 1;
    }
}

int main()
{

    int n, key;
    cin >> n >> key;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = last_occurence(arr, n, key);

    cout << "The last occurence of " << key << " is at : " << ans << endl;

    return 0;
}