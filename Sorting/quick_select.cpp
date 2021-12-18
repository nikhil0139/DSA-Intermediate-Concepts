// Given vector of unsorted integers, find the element which is at k index after sorting elements. 

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

int quick_select(vector<int> &arr, int s, int e, int k)
{
    int p = partition(arr, s, e);
    if(p == k - 1)  
        return arr[p];
    else if(p > k - 1)
        return quick_select(arr, s, p - 1, k);
    else 
        return quick_select(arr, p + 1, e, k);
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

    int k;
    cin >> k;

    cout << quick_select(arr, 0, n - 1, k);


    return 0;
}