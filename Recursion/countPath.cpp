// Given two integers start and end, print how many ways you can reach end from start if you move according to number on the dice.

#include <bits/stdc++.h>
using namespace std;

int countPath(int start, int end)
{
    if(start == end)  return 1;

    if(start > end)  return 0;

    int ans = 0;

    for(int i=1;i<=6;i++){
        ans += countPath(start + i, end);
    }
    return ans;
}

int main()
{

    int start, end;
    cin >> start >> end;

    cout << countPath(start, end);

    return 0;
}