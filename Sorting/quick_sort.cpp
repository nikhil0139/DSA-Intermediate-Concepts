// Given a vector of integers, apply quick sort to sort the vector.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[s];
    int i = s + 1, j = e;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    } while (i < j);

    swap(arr[j], arr[s]);
    return j;
}

void quick_sort(vector<int> &arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);
    quick_sort(arr, s, p - 1);
    quick_sort(arr, p + 1, e);
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

    quick_sort(arr, 0, n - 1);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}