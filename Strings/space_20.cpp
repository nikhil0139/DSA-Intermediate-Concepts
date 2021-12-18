// Given a paragraph, put %20 in place of spaces in the paragraph.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    char paragraph[10000];
    cin.getline(paragraph, 1000);
    int spaces = 0;

    for (int i = 0; paragraph[i] != '\0'; i++)
    {
        if (paragraph[i] == ' ')
            spaces++;
    }

    int len = strlen(paragraph) + 2 * spaces;
    paragraph[len] = '\0';
    len--;

    for (int i = strlen(paragraph)-1; i >= 0; i--)
    {
        if (paragraph[i] == ' ')
        {
            paragraph[len] = '0';
            paragraph[len - 1] = '2';
            paragraph[len - 2] = '%';
            len -= 3;
        }
        else
        {
            paragraph[len] = paragraph[i];
            len--;
        }
    }

    cout << paragraph << endl;

    return 0;
}