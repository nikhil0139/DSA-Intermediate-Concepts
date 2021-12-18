// Given a paragraph , find all the starting indices of the word in the paragraph.

#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{
    vector<int> ans;
    int i = big.find(small);
    while (i != -1)
    {
        ans.push_back(i);
        i = big.find(small, i + 1);
    }

    return ans;
}

int main()
{

    string s, word;
    getline(cin, s);
    cin >> word;

    vector<int> ans = stringSearch(s, word);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    cout << endl;
}