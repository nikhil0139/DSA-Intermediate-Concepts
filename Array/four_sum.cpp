// Given an arry of integers, we have to find all the quadruplets whose sum is equal to the given target sum.

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

    int x;
    cin >> x;

    sort(arr.begin(), arr.end());
    vector<vector<int>> res;

    int flag = 0;

    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {

            int p = j + 1;
            int q = n - 1;

            while (p < q)
            {
                int sum = arr[i] + arr[j] + arr[p] + arr[q];
                if (sum == x)
                {
                    res.push_back({arr[i], arr[j], arr[p], arr[q]});
                    p++;
                    q--;
                    flag = 1;
                }
                else if (sum < x)
                {
                    p++;
                }
                else
                {
                    q--;
                }
            }
        }
    }

    if (flag == 0)
        cout << "No such quadruplets exist" << endl;

    else
    {
        for (auto x : res)
        {
            for (auto y : x)
                cout << y << ", ";
            cout << endl;
        }
    }

    return 0;
}