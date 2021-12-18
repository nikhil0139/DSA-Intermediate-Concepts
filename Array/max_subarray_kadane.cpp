// Given an arry of integers, we have to maximum sum of all the subarrays (Kadane's Algorithm).

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
    int maxi = INT_MIN, curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        maxi = max(maxi, curr);
        if (curr < 0)
            curr = 0;
    }

    //   ----> OR <----

    /*for (int i = 0; i < n; i++)
    {
        curr = max(curr+ arr[i] , arr[i]);
        maxi = max(maxi, curr);
    }*/

    cout << "Maximum sum of all subarrays: " << maxi << endl;
    return 0;
}