// Given unsorted vector, arrange all the elements in such a way that they form a wave starting from greater elements.

//  Example:    Input:     1 2 3 4 5 6 
//              Output:    2 1 4 3 6 5 

#include <bits/stdc++.h>
using namespace std;

void waveSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] > arr[i - 1])
            swap(arr[i], arr[i - 1]);

        if (arr[i] > arr[i + 1] && i < n - 1)
            swap(arr[i], arr[i + 1]);
    }
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

    waveSort(arr, n);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}