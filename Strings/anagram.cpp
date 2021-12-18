// Given a vector of n strings and a word, find how many strings in vector are anagram to the word.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> v;
    string x;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    string word;
    cin >> word;

    unordered_map<char, int> w;

    for (char c = 'a'; c <= 'z'; c++)
    {
        w[c] = 0;
    }

    for (auto c : word)
    {
        w[c]++;
    }

    unordered_map<char, int> m;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            m[c] = 0;
        }

        for (auto c : v[i])
        {
            m[c]++;
        }

        int flag = 0;

        for (char c = 'a'; c <= 'z'; c++)
        {
            if (w[c] != m[c])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            ans++;
        }
    }

    cout << "Total number of strings that are anagrams: " << ans << endl;
    return 0;
}