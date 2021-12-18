// Given a sorted vector which is rotated, find the index of key element in rotated sorted vector.

#include <bits/stdc++.h>
using namespace std;

int rotated_search(vector<int> arr, int s, int e, int key)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[s] <= arr[mid])
        {
            if (key >= arr[s] && key <= arr[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }
        else
        {
            if (key >= arr[mid] && key <= arr[e])
                s = mid + 1;
            else
                e = mid - 1;
        }
    }
    return -1;
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

    int key;
    cin >> key;

    cout << rotated_search(arr, 0, n - 1, key);

    return 0;
}