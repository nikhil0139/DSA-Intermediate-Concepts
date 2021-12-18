#include <bits/stdc++.h>

using namespace std;

bool canPut(vector<vector<int>>input, int i, int j, int number)
{

    for (int k = 0; k < input.size(); k++)
    {

        if (input[i][k] == number || input[k][j] == number)
        {

            return false;
        }
    }

    int sx = (i / 3) * 3;

    int sy = (j / 3) * 3;

    for (int x = sx; x < sx + 3; x++)
    {

        for (int y = sy; y < sy + 3; y++)
        {

            if (input[x][y] == number)
            {

                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(vector<vector<int>> &input, int i, int j)
{

    if (i == input.size())
    {

        return true;
    }

    if (j == input.size())
    {

        return solveSudoku(input, i + 1, 0);
    }

    if (input[i][j] != 0)
    {

        return solveSudoku(input, i, j + 1);
    }

    for (int k = 1; k <= input.size(); k++)
    {

        if (canPut(input, i, j, k))
        {

            input[i][j] = k;

            bool solveSubProblem = solveSudoku(input, i, j + 1);

            if (solveSubProblem == true)

                return true;

            input[i][j] = 0;
            
        }
    }

    return false;
}

int main()
{
    vector<vector<int>> grid = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                                {5, 2, 0, 0, 0, 0, 0, 0, 0},
                                {0, 8, 7, 0, 0, 0, 0, 3, 1},
                                {0, 0, 3, 0, 1, 0, 0, 8, 0},
                                {9, 0, 0, 8, 6, 3, 0, 0, 5},
                                {0, 5, 0, 0, 9, 0, 6, 0, 0},
                                {1, 3, 0, 0, 0, 0, 2, 5, 0},
                                {0, 0, 0, 0, 0, 0, 0, 7, 4},
                                {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    if (solveSudoku(grid, 0, 0))
    {
        for (auto i : grid)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
}