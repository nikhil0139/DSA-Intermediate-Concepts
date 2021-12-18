#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    stack<int> st;
    int leftSmall[n], rightSmall[n];

    // left smaller
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && heights[st.top()] >= heights[i])
        {
            st.pop();
        }

        if (st.empty())
            leftSmall[i] = 0;
        else
            leftSmall[i] = st.top() + 1;
        st.push(i);
    }

    // clear the stack to be re-used
    while (!st.empty())
        st.pop();

    
    // right smaller
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && heights[st.top()] >= heights[i])
        {
            st.pop();
        }

        if (st.empty())
            rightSmall[i] = n - 1;
        else
            rightSmall[i] = st.top() - 1;

        st.push(i);
    }

    int maxA = 0;
    for (int i = 0; i < n; i++)
    {
        maxA = max(maxA, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
    }
    return maxA;
}

int main(){

    int n;
    cin >> n;

    vector<int>arr(n);
    
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << largestRectangleArea(arr) << endl;

    return 0;
}
