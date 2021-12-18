// Given a string s, print all the permutations of string s.

#include <bits/stdc++.h>
using namespace std;

void permutations(string s, string output)
{
    if (s == "")
    {
        cout << output << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        string reduced = s.substr(0, i) + s.substr(i + 1);
        permutations(reduced, output + c);
    }
}

int main()
{
    string s;
    cin >> s;

    permutations(s, "");

    return 0;
}