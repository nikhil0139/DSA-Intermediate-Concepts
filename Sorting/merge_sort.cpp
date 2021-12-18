// Given a vector of integers, apply merge sort to sort the vector.


#include <bits/stdc++.h>
using namespace std;

void merging(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;

    int i = s, j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }

    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }

    int k = 0;
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[k++];
    }
}

void merge_sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    merge_sort(arr, s, mid);
    merge_sort(arr, mid + 1, e);
    merging(arr, s, e);
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

    merge_sort(arr, 0, n - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}