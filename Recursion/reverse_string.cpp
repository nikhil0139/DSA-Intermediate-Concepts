// Given a string, print the reverse of it.

#include <bits/stdc++.h>
using namespace std;

void reverse_string(string s)
{
    if (s == "")
        return;

    char c = s[0];
    string reduced = s.substr(1);

    reverse_string(reduced);

    cout << c;
}

int main()
{
    string s;
    cin >> s;

    reverse_string(s);

    return 0;
}