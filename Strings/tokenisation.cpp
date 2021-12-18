// Given a paragraph, split all the words using some delimeters.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char para[1000];
    cin.getline(para, 1000);
    
//  --> using stringstream

 /* stringstream temp(para);

    vector<string> ans;
    string token;

    while (getline(temp, token, ' '))
    {
        ans.push_back(token);
    }

    for (auto it : ans)
    {
        cout << it << ",";
    }
    cout << endl;

*/

//  --> using strtok

    char *token = strtok(para, " ");

    while (token != NULL)
    {
        cout << token << ", ";
        token = strtok(NULL, " ");
    }


    return 0;
}