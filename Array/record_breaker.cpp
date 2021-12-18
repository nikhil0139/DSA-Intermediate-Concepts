// Given an array, find the total record breaking days.
// A day is record breaking day if:
//    1) a[i] > all previous elements
//    2) a[i]>a[i+1]

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0, maxi = INT_MIN;

    if (arr[0] > arr[1])
        count++;

    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i - 1]);
        if (i == n - 1 && arr[i] > maxi)
            count++;

        else if (arr[i] > maxi && arr[i] > arr[i + 1])
            count++;
    }

    cout << "Record breaker days : " << count << endl;

    return 0;
}