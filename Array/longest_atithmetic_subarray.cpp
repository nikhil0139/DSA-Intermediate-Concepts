// Given an array, find the longest arithmetic subarray i.e. longest subarray in which diff b/w two consecutive elements is same.

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

    int cd = arr[1] - arr[0], curr = 2, ans = 2;

    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == cd)
        {
            curr++;
        }
        else
        {
            cd = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(curr, ans);
    }
    cout << "Maximum length of arithmetic subarray is: " << ans << endl;

    return 0;
}