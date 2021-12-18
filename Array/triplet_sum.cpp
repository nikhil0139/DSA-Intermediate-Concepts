// Given an arry of integers, we have to find all the triplets whose sum is equal to the given target sum.

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

    for (int i = 0; i <= n - 3; i++)
    {
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if (sum == x)
            {
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                flag = 1;
            }

            else if (sum > x)
                k--;

            else
                j++;
        }
    }

    if (flag == 0)
        cout << "No such triplet exist" << endl;

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

