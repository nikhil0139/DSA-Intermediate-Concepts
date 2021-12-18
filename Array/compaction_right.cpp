// Given a array move all zeroes towards right and other elements towards left maintaining their order,

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

    int i = 0, j = -1;

    while (i < n)
    {
        if (arr[i] != 0)
        {
            j++;
            swap(&arr[i], &arr[j]);
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}