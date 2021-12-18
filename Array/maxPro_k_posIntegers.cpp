// Given an array of integers and k, you have to find the max product of k elements.

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

    int k;
    cin >> k;

    priority_queue<int, vector<int>, greater<int>> q;

    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (arr[i] <= q.top())
            continue;
        else
        {
            q.pop();
            q.push(arr[i]);
        }
    }

    long long int prod = 1;

    while (!q.empty())
    {
        prod *= q.top();
        q.pop();
    }

    cout << "Maximum product of " << k << "intergers in the array is : " << prod << endl;

    return 0;
}
