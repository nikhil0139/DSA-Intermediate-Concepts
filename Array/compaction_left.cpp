// Given a array move all zeroes towards left and other elements towards right maintaining their order,

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

    int i = n - 1, j = n;

    while (i >= 0)
    {
        if (arr[i] != 0)
        {
            j--;
            swap(&arr[i], &arr[j]);
        }
        i--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}