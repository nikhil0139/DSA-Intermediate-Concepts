// Convert the given integer into its equivalent string.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int s;
    cin >> s;

    string ans = "";

    while (s > 0)
    {
        char c = s % 10 + 48;
        ans += c;
        s /= 10;
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}