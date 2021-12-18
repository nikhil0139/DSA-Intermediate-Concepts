// Given vector of n unsorted integers, find the count of inversion elements.

// An inversion element is those which satisfies two condition:
// 1) i < j             (0 <= i, j < n)
// 2) arr[i] > arr[j]


#include <bits/stdc++.h>
using namespace std;

int inverging(vector<int> &arr, int s, int e)
{
    int mid = (s + e) / 2;

    int i = s, j = mid + 1;

    vector<int> temp;
    int cnt = 0;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            cnt += mid - i + 1;
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
    return cnt;
}

int inversion_count(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return 0;

    int mid = (s + e) / 2;

    int c1 = inversion_count(arr, s, mid);
    int c2 = inversion_count(arr, mid + 1, e);
    int c3 = inverging(arr, s, e);

    return (c1 + c2 + c3);
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

    cout << inversion_count(arr, 0, n - 1);

    

    return 0;
}