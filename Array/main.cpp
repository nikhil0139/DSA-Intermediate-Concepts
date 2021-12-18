#include<bits/stdc++.h>
using namespace std;

char* fun(char *a, int n){

    // if find char array and return pointer to it.

    char ans[4] = {'y', 'e', 's'};
    char* s = &ans[0];
    return s;


}

int main(){

    char arr[4] = {'d', 'g', 'j', 'p'}; // "dejp";

    /*for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }*/

    char *p = fun(arr, 4);

    for(int i=0;i<4;i++){
        cout << p[i] << endl;
    }

    /*

    // in case we have a string
    string temp = "no";
    char *arr = &temp[0];

    cout << arr << endl;

    */
}