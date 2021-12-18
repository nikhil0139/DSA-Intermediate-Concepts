// Given an array, find the length of the subsequence which can be rearranged so that all the elements in the sequence are consecutive. 

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

    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int largest = 1;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        if (s.find(arr[i] - 1) != s.end())
            continue;
        else
        {
            int next = arr[i] + 1;
            while (s.find(next) != s.end())
            {
                count++;
                next++;
            }
        }
        largest = max(largest, count);
    }

    cout << "Largest band is " << largest << endl;

    return 0;
}