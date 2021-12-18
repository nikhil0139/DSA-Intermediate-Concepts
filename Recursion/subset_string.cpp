// Given a string, print all the substrings of s.

#include <bits/stdc++.h>
using namespace std;

void subset(string s, string output)
{
    if (s.length() == 0)
    {
        cout << output << endl;
        return;
    }

    char c = s[0];
    string reduced = s.substr(1);

    subset(reduced, output);
    subset(reduced, output + c);
    
}

int main()
{

    string s;
    cin >> s;

    subset(s, "");

    return 0;
}