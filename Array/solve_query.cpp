// Given a num vector and a query vector, find a subset in num for each query such that sum of subset in num is equal to the query value.

#include <bits/stdc++.h>
using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    vector<bool> res;
    int add = 0, flag = 0;

    for (int i = 0; i < query.size(); i++)
    {
        flag = 0;

        for (int j = 0; j < (1 << num.size()); j++)
        {
            add = 0;
            for (int bit = 0; bit < num.size(); bit++)
            {
                if (j & (1 << bit))
                {
                    add += num[bit];
                    if (add == query[i])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
        }

        if (flag == 1)
            res.push_back(true);
        else
            res.push_back(false);
    }

    return res;
}

int main()
{

    vector<bool> res = subsetSum({4, 1, 5}, {7, 9});

    for (auto i : res)
    {
        cout << i << " ";
    }
}
