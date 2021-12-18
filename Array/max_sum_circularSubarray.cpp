// Given an arry of integers, we have to print the maximum sum of the circular subarray.

#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> arr, int n)
{
    int maxi = INT_MIN, curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        if (curr < 0)
            curr = 0;
        maxi = max(maxi, curr);
    }
    return maxi;
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

    int nowrap = kadane(arr, n);  // maximum where no need of wrapping  { -1 5 4 6 } 
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] *= -1;
    }
    int wrap = sum + kadane(arr, n);  // maximumum where of wrapping 

    cout << "Maximum circular subarray sum is : " << max(wrap, nowrap) << endl;

    return 0;
}