// Given a vector of integers, print all the permutations of the vector.

#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int> arr, vector<vector<int>> &res, int i)
{
    if (i == arr.size())
    {
        res.push_back(arr);
        return;
    }

    for (int x = i; x < arr.size(); x++)
    {
        swap(arr[i], arr[x]);
        permutations(arr, res, i + 1);
        swap(arr[i], arr[x]);
    }

    return;
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

    vector<vector<int>> res;

    permutations(arr, res, 0);

    for (auto i : res)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}