// Given the n (chances for each team for penalty), print the winner of the football penalty shootout game.
// Input is given as {team, goal}
//                    team --> team(A or B)
//                    goal --> (G for goal, N for No goal)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char team, goal;
    
    int difAB = 0;
    int chancesA = n, chancesB = n;
    int winner = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        cin >> team >> goal;

        if (team == 'A')
        {
            chancesA--;
            if (goal == 'G')
            {
                difAB++;
            }
        }

        else
        {
            chancesB--;
            if (goal == 'G')
            {
                difAB--;
            }
        }

        if (difAB > chancesB)
            winner = 1;
        if (-difAB > chancesA)
            winner = -1;

        if (winner != 0)
            break;
    }

    if (winner == 1)
        cout << "A is the winner" << endl;
    if (winner == -1)
        cout << "B is the winner" << endl;
    if (winner == 0)
        cout << "Draw" << endl;

    return 0;
}