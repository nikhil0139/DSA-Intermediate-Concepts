#include <bits/stdc++.h>
using namespace std;

bool match(char a, char b)
{
    if (a == '(' && b == ')')
        return true;
    else if (a == '{' && b == '}')
        return true;
    else if (a == '[' && b == ']')
        return true;
    else
        return false;
}

int main()
{

    string s;
    cin >> s;

    stack<char> st;
    bool ans = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if (st.empty())
            {
                ans = false;
                break;
            }
            if (match(st.top(), s[i]))
                st.pop();
            else{
                ans = false;
                break;
            }
        }
    }

    if (!st.empty())
    {
        ans = false;
    }

    if (ans)
        cout << "Yes, string is balanced" << endl;
    else
        cout << "No, string is not balanced" << endl;

    return 0;
}