// Given an arry of integers, we have to find the smallest missing positive element.

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
    int k = 1;

    while (s.find(k) != s.end())
    {
        k++;
    }

    cout << "First missing number is : " << k << endl;

    return 0;
}