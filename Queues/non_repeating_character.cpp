#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string ans;
    vector<int> arr(27, 0);

    queue<char> q;


    for (int i = 0; i < s.length(); i++)
    {
        q.push(s[i]);
        arr[s[i] - 'a']++;


        while (!q.empty())
        {
            int index = q.front() - 'a';
            if (arr[index] > 1)
                q.pop();
            else
            {
                ans += q.front();
                break;
            }
        }

        if (q.empty())
            ans += "-1";
    }

    cout << ans << endl;

    return 0;
}