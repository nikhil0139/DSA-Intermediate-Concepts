// You have n number of strings. They are the numeric strings which have spaces exactly at same position. And also you have a key, reversal and the ordering.
// You have to sort the strings on the basis of key and their order and if reversal is true, you have to reverse the output.

//   Input
//   3                    <-- n
//   567 25 32            <-- s1
//   145 26 54            <-- s2
//   548 35 15            <-- s3
//   3 false numeric      <-- key reversal ordering

//   Output   
//   548 35 15                                        
//   567 25 32
//   145 26 54


#include <bits/stdc++.h>
using namespace std;

string getkey(string str, int key)
{
    char *token = strtok((char *)str.c_str(), " ");

    while (key > 1)
    {
        key--;
        token = strtok(NULL, " ");
    }
    return string(token);
}

bool lexoComp(pair<string, string> a, pair<string, string> b)
{
    return (a.second < b.second);
}

bool numComp(pair<string, string> a, pair<string, string> b)
{
    return (stoi(a.second) < stoi(b.second));
}

int main()
{
    int n;
    cin >> n;

    cin.get(); // for \n

    string temp;
    vector<string> str;

    for (int i = 0; i < n; i++)
    {
        getline(cin, temp, '\n');
        str.push_back(temp);
    }

    int key;
    string reversal, order;
    cin >> key >> reversal >> order;

    vector<pair<string, string>> keystr;

    for (int i = 0; i < n; i++)
    {
        keystr.push_back({str[i],getkey(str[i], key)});
    }

    if (order == "lexographic")
    {
        sort(keystr.begin(), keystr.end(), lexoComp);
    }
    else
    {
        sort(keystr.begin(), keystr.end(), numComp);
    }

    if (reversal == "true")
    {
        reverse(keystr.begin(), keystr.end());
    }

    for (auto it : keystr)
    {
        cout << it.first << endl;
    }

    return 0;
}