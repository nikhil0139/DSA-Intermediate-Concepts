// subarray = continuous part of the array
//                   n
// total subarrays =  C + n  = n * (n + 1) / 2
//                     2

// Given an arry of integers, we have to print the sum of all the subarrays.

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

    int k = 1, add;

    for (int i = 0; i < n; i++)
    {
        add = 0;
        for (int j = i; j < n; j++)
        {
            add += arr[j];
            cout << "Sum of Subarray " << k++ << " : " << add << endl;
        }
    }

    return 0;
}