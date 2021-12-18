// Given an arry of integers, we have to find the maximun height of the mountain.

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

    int largest = 0;

    for (int i = 1; i <= n - 2; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int j = i, cnt = 1;
            while (arr[j] > arr[j - 1] && j >= 1)
            {
                cnt++;
                j--;
            }
            while (arr[i] > arr[i + 1] && i <= n - 2)
            {
                cnt++;
                i++;
            }
            largest = max(largest, cnt);
        }
    }

    cout << "Highest height of the mountain is : " << largest << endl;

    return 0;
    
}