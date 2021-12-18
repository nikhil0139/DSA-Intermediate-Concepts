// Given a string of numbers, print the strings that we can type through that numbers using phone keypad.

#include <bits/stdc++.h>
using namespace std;

string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void strings(string input, string output, int i)
{
    if (input[i] == '\0')
    {
        cout << output << endl;
        return;
    }

    int curr = input[i] - '0';

    if (curr == 0 || curr == 1)
    {
        strings(input, output, i + 1);
    }

    for (int j = 0; j < keypad[curr].size(); j++)
    {
        strings(input, output + keypad[curr][j], i + 1);
    }
}

int main()
{

    string input;
    cin >> input;

    strings(input, "", 0);

    return 0;
}