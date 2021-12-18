// Given a keyboard in form of a string and a word, find the time taken to type the word using that keyboard.

#include<bits/stdc++.h>
using namespace std;


int main(){

    string keyboard, wordToType;
    cin >> keyboard >> wordToType;

    unordered_map<char, int>m;

    for(int i=0;i<keyboard.length();i++){
        m[keyboard[i]] = i;
    }

    int prev = 0, ans = 0;

    for(int i=0;i<wordToType.length();i++){
        ans += m[wordToType[i]] - prev;
        prev = m[wordToType[i]];
    }

    cout<<"Time taken to type is " << ans << endl;


    return 0;

    
}