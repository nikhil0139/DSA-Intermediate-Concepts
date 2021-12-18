// Given two numbers n and p. find the square root of n upto p places.

#include <bits/stdc++.h>
using namespace std;

float findingRoot(int n, int p)
{
    int mid, s = 0, e = n;
    float ans = 0;

    while (s <= e)
    {
        mid = (s + e) / 2;

        if (mid * mid == n)
        {
            return mid;
        }

        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }
    //cout << ans;
    float inc = 0.1;

    for (int i = 0; i < p; i++)
    {
        while (ans * ans <= n)
            ans += inc;

        ans -= inc;
        inc /= 10.0;
    }

    return ans;
}

int main()
{

    int n, p;
    cin >> n >> p;

    cout << findingRoot(n, p) << endl;

    return 0;
}