// Given a string, move all the x to the end of the string.
#include <bits/stdc++.h>
using namespace std;

string move_X_to_end(string s)
{
    if (s == "")
        return "";

    char c = s[0];

    string ans = move_X_to_end(s.substr(1));

    if (c == 'x')
        return ans + c;

    return c + ans;
}

int main()
{
    string s;
    cin >> s;

    cout << move_X_to_end(s);

    return 0;
}