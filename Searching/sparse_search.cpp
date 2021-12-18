// Given a vector of sorted strings(some empty strings are also present anywhere b/w them), find the index of key string in the vector. 

#include <bits/stdc++.h>
using namespace std;

int sparse_search(vector<string> arr, int s, int e, string key)
{
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (arr[mid] == "")
        {
            int left = mid - 1, right = mid + 1;

            while (1)
            {
                if (left < s && right > e)
                    return -1;

                else if (right <= e && arr[right] != "")
                {
                    mid = right;
                    break;
                }
                else if (left >= s && arr[left] != "")
                {
                    mid = left;
                    break;
                }

                left--;
                right++;
            }
        }

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
            e = mid - 1;

        else
            s = mid + 1;
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string key;
    cin >> key;

    cout << sparse_search(arr, 0, n - 1, key);

    return 0;
}