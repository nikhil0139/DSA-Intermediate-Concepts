#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<int> st;

    for (int i = 0; i <= s.length() - 1; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(b + a);
                break;
            case '-':
                st.push(b - a);
                break;
            case '*':
                st.push(b * a);
                break;
            case '/':
                st.push(b / a);
                break;
            case '%':
                st.push(b % a);
                break;
            case '^':
                st.push(b ^ a);
                break;
            }
        }
    }

    cout << st.top() << endl;

    return 0;
}