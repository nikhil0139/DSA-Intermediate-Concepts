// Given an array containing 0s 1s 2s, sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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

    int zero = -1, i = 0, two = n;

    while (i < two)
    {
        if (arr[i] == 2)
        {
            two--;
            swap(&arr[i], &arr[two]);
        }
        else if (arr[i] == 0)
        {
            zero++;
            swap(&arr[i], &arr[zero]);
            i++;
        }
        else if (arr[i] == 1)
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}