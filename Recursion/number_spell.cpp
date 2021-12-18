// Given a number, print the number in english format.

#include <bits/stdc++.h>
using namespace std;

string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void number_spell(int n)
{
    if(n==0)
        return;

    int digit = n % 10;
    number_spell(n / 10);
    cout << numbers[digit] << " ";
}

int main()
{

    int n;
    cin >> n;

    number_spell(n);

    return 0;
}