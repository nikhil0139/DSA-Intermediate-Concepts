// Given a vector of strings, make a string out of them that is lexographically smaller.

#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
    return (a + b < b + a);
}

int main(){

    int n;
    cin >> n;

    vector<string>s(n);

    for(int i=0;i<n;i++){
        cin >> s[i];
    }


    sort(s.begin(), s.end(), comp);

    string ans = "";

    for(int i=0;i<n;i++){
        ans += s[i];
    }

    cout << ans << endl;

    return 0;
}