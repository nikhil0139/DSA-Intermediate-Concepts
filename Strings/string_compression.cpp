// Given a string, compress it and made changes in the vector and return length of the compressed vector

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int n = chars.size();
    vector<char> temp;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && chars[i] == chars[i + 1])
        {
            count++;
            i++;
        }

        temp.push_back(chars[i]);

        if (count == 1)
            continue;
        else if (count > 9)
        {
            string r = to_string(count);
            for (int k = 0; k < r.length(); k++)
            {
                temp.push_back(r[k]);
            }
        }
        else
        {
            temp.push_back((count + 48));
        }
    }
    chars = temp;
    return temp.size();
}

int main()
{

    vector<char> s;
    char x;

    for (int i = 0; i < 20; i++)
    {
        cin >> x;
        s.push_back(x);
    }

    cout << compress(s) << endl;

    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}