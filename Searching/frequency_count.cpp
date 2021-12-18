// Given a vector of sorted elements, find the count of key element.

#include <bits/stdc++.h>
using namespace std;

int frequency_count(vector<int> arr, int s, int e, int key)
{
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            int ans = 1;
            int i = mid-1, j = mid + 1;

            while(i >= s && arr[i] == key){
                i--;
                ans++;
            }

            while(j <= e && arr[j] == key){
                j++;
                ans++;
            }
            return ans;
        }

        else if (arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
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

    cout << frequency_count(arr ,0, n-1, key);

    return 0;
}