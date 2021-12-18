// Given a sentence, find the length of largest word in the sentence and also print the word.

#include <bits./stdc++.h>
using namespace std;

int main()
{

    string a;
    getline(cin, a);

    int maxi = INT_MIN, curr = 0, st = 0, maxst = 0;

    for (int i = 0; i < a.length() + 1; i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (curr > maxi)
            {
                maxi = curr;
                maxst = st;
            }
            st = i + 1;
            curr = 0;
        }
        else
        {
            curr++;
        }
    }

    cout << "Maximum length of a word in the sentence: " << maxi << endl;
    cout << "The word with max length is : ";

    for (int i = 0; i < maxi; i++)
    {
        cout << a[i + maxst];
    }

    return 0;
}
