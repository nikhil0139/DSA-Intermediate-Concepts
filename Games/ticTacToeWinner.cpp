// Given the n X n grid, print the winner of the tic tac toe game.
// Input is given as {x, y, c}  (1-indexed)
//                    x --> x coordinate
//                    y --> y coordinate
//                    c --> X or O

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, y;
    char c;

    vector<int> difR(n, 0);
    vector<int> difC(n, 0);
    int difD1 = 0, difD2 = 0;
    int winner = 0;

    for (int i = 0; i < n * n; i++)
    {
        cin >> x >> y >> c;

        if (c == 'X')
        {
            difR[x - 1]++;
            difC[y - 1]++;
            if (x == y)
                difD1++;
            if (x + y == n + 1)
                difD2++;
        }
        else
        {
            difR[x - 1]--;
            difC[y - 1]--;
            if (x == y)
                difD1--;
            if (x + y == n + 1)
                difD2--;
        }

        if (difR[x - 1] == n || difC[y - 1] == n)
            winner = 1;
        if (difR[x - 1] == -n || difC[y - 1] == -n)
            winner = -1;
        if (difD1 == n || difD2 == n)
            winner = 1;
        if (difD1 == -n || difD2 == -n)
            winner = -1;

        if (winner != 0)
            break;
    }

    if (winner == 1)
        cout << "X is the winner" << endl;
    if (winner == -1)
        cout << "O is the winner" << endl;
    if (winner == 0)
        cout << "Draw" << endl;

    return 0;
}