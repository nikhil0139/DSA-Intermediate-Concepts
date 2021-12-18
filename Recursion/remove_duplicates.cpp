// Given a string, remove all the duplicates in the string.
#include <bits/stdc++.h>
using namespace std;

string remove_duplicate(string s)
{
    if (s == "")
        return "";

    char c = s[0];

    string ans = remove_duplicate(s.substr(1));

    if (ans[0] == c)
        return ans;

    return c + ans;
}

int main()
{
    string s;
    cin >> s;

    cout << remove_duplicate(s);

    return 0;
}