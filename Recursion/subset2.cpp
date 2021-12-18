// Given a string, print all the substrings including their ASCII value.

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
    int x = c;
    string reduced = s.substr(1);

    subset(reduced, output);
    subset(reduced, output + c);
    subset(reduced, output + to_string(x));
    
}

int main()
{

    string s;
    cin >> s;

    subset(s, "");

    return 0;
}