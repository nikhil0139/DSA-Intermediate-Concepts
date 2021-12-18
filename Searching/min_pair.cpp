// Given two vectors, find a pair(one element from one and another element from another) such that difference between them is minimum.

#include <bits/stdc++.h>
using namespace std;

pair<int, int> min_pair(vector<int> a, vector<int> b)
{

    pair<int, int>p = {-1, -1};
    int diff = INT_MAX;

    for(auto i : a)
    {
        auto lb = lower_bound(b.begin(), b.end(), i) - b.begin();

        if(lb - 1 >= 0 && i - b[lb-1] < diff){
            diff = i - b[lb-1];
            p.first = i;
            p.second = b[lb - 1];
        } 

        if(lb != b.size() && b[lb] - i < diff){
            diff = b[lb] - i;
            p.first = b[lb];
            p.second = i;
        }
    }

    cout << "The minimum difference is " << diff;
    return p;    
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    pair <int, int> p = min_pair(a, b);

    cout << " and min pair is " << p.first << " and " << p.second << endl;

    return 0;
}