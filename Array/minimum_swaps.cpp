// Given an arry of integers, we have to find the minimum swaps required to make the array sorted.

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

    pair<int, int> p[n];

    for (int i = 0; i < n; i++)
    {
        p[i].first = arr[i];
        p[i].second = i;
    }

    sort(p, p + n);

    vector<bool> visit(n, false);

    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        if (visit[i] == true || p[i].second == i)
            continue;

        int j = i, count = 0, next;

        while (visit[j] == false)
        {
            visit[j] = true;
            next = p[j].second;
            j = next;
            count++;
        }
        swaps += count - 1;
    }

    cout << "Minimum number of swaps required: " << swaps << endl;

    return 0;
}