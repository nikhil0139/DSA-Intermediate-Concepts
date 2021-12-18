// Given two binary numbers, find the sum of two binary numbers.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int bin1, bin2;
    cin >> bin1 >> bin2;

    vector<int> res;
    int carry = 0, x;

    while (bin1 > 0 || bin2 > 0)
    {

        x = (bin1 % 10 + bin2 % 10 + carry) % 2;
        res.push_back(x);
        carry = (bin1 % 10 + bin2 % 10 + carry) / 2;
        bin1 /= 10;
        bin2 /= 10;
    }

    if (carry != 0)
    {
        res.push_back(carry);
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout << endl;

    return 0;
}