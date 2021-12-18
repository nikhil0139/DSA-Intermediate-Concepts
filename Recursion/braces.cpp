// Given an integer n, generate all the valid bracket pairs.

//            for n = 3
//                        ((()))
//                        (()())
//                        (())()
//                        ()(())
//                        ()()()

#include <bits/stdc++.h>
using namespace std;

void braces(string ans, int n, int open, int close, int i)
{
    if (i == 2 * n)
    {
        cout << ans <<endl;
        return;
    }

    if(open < n)
    {
        braces(ans + '(', n, open + 1, close, i + 1);
    }

    if (close < open)
    {
        braces(ans + ')', n, open, close + 1, i + 1);
    }
}

int main()
{

    int n;
    cin >> n;

    braces("", n, 0, 0, 0);

    return 0;
}