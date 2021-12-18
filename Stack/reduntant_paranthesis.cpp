#include <bits/stdc++.h>
using namespace std;

bool redundantParentheses(string str)
{

    stack<char> st;

    for (char s : str)
    {
        if (s != ')')
            st.push(s);

        else
        {
            bool operator_find = false;
            while (!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    operator_find = true;
                st.pop();
            }
            st.pop();
            if (operator_find == false)
                return true;
        }
    }
    return false;
}

int main()
{

    string s;
    cin >> s;

    if (redundantParentheses(s))
        cout << "Yes, there are reduntant paranthesis" << endl;
    else
        cout << "No, there are not resuntant paranthesis" << endl;

    return 0;
}
