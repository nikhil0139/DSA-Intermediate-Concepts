// Given an array,  find two elements which are not repeating in the array.

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

    int XOR = 0;

    for (int i = 0; i < n; i++)
    {
        XOR ^= arr[i];
    }

    int count = 0;

    while (XOR)
    {
        if (XOR & 1)
            break;
        count++;
        XOR >> 1;
    }

    int XOR1 = 0, XOR2 = 0;
    int mask = 1 << count;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & mask)
        {
            XOR1 ^= arr[i];
        }
        else
        {
            XOR2 ^= arr[i];
        }
    }

    cout << "Two numbers whose occurence in the array is : " << XOR1 << " and " << XOR2 << endl;

    return 0;
}