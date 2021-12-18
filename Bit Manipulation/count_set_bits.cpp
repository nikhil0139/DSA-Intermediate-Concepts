// In a binary number, count the number of set bits.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, count = 0;
    cin >> n;

    int temp = n;

    while (n != 0)
    {
        n = n & n - 1;
        count++;
    }

    cout << "Number of set bits in " << temp << " are " << count << endl;

    return 0;
}