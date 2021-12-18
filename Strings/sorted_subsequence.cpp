// Given a string s, find all the subsequences(subsets) of the given string in sorted way.

#include <bits/stdc++.h>
using namespace std;

bool comp(string s1, string s2)
{
    if (s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}

void subseq(string s, string output, vector<string> &str)
{
    if (s.length() == 0)
    {
        str.push_back(output);
        return;
    }

    char c = s[0];
    string reduced = s.substr(1);

    subseq(reduced, output + c, str);
    subseq(reduced, output, str);
}

int main()
{

    string s;
    cin >> s;

    vector<string> str;

    subseq(s, "", str);

    sort(str.begin(), str.end(), comp);

    for (auto it : str)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}