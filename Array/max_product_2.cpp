// Given a array, return the maximum product of two array elements. 

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

    long long int min1 = INT_MAX, min2 = INT_MAX, result;
    long long int max1 = INT_MIN, max2 = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2)
        {
            max2 = arr[i];
        }

        if(arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i] < min2)
        {
            min2 = arr[i];
        }
    }

    result = max(max1 * max2 , min1 * min2);

    cout << "Maximum product of two elements of array : " << result << endl;
    
    return 0;
}