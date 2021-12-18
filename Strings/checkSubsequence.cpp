// Given a sentence and a sequence, find whether the sequence is  present in sentence or not.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, sequence;
    getline(cin, sentence);
    cin >> sequence;

    int i = 0, j = 0;

    while (i < sentence.length() && j < sequence.length())
    {
        if (sentence[i] == sequence[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (j == sequence.length() && i != sentence.length())
    {
        cout << "Yes the sequence is find in the sentence." << endl;
    }
    else
    {
        cout << "No the sequence is not find in the sentence." << endl;
    }

    return 0;
}