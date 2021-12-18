// Given a string, replace pi with 3.14 .
#include <bits/stdc++.h>
using namespace std;

void pi_with_314(string s)
{
    if (s == "")
        return;

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        pi_with_314(s.substr(2));
    }

    else
    {
        cout << s[0];
        pi_with_314(s.substr(1));
    }
}

int main()
{
    string s;
    cin >> s;

    pi_with_314(s);

    return 0;
}