// Given a sorted vector of n integers and total number of birds, find the miminum distance between two birds such that the distance between
// all the birds is maximum.

#include <bits/stdc++.h>
using namespace std;

bool canPlaceBirds(vector<int> arr, int birds, int n, int distance)
{
    int loc = arr[0];
    birds--;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - loc >= distance)
        {
            loc = arr[i];
            birds--;
            if (birds == 0)
                return true;
        }
    }
    return false;
}

int angry_birds(vector<int> arr, int n, int birds)
{
    int mid, s = 0, e = arr[n - 1] - arr[0], ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        bool canPlace = canPlaceBirds(arr, birds, n, mid);

        if (canPlace)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    int nests, birds;
    cin >> nests >> birds;

    vector<int> arr(nests);

    for (int i = 0; i < nests; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << angry_birds(arr, nests, birds);

    return 0;
}