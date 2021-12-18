// Given a word, find that the word is pallindrome or not.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;

    char a[x + 1];

    cin >> a;

    bool check = true;

    for (int i = 0; i < x; i++)
    {
        if (a[i] != a[x - i - 1])
            check = false;
    }

    if (check)
    {
        cout << a << " is a pallindrome" << endl;
    }
    else
    {
        cout << "No " << a << " is not a pallindrome" << endl;
    }

    return 0;
}