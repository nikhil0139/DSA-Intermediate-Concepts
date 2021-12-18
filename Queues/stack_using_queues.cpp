#include <bits/stdc++.h>
using namespace std;

class Stack
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        if (!q1.empty())
            q1.push(x);
        else
            q2.push(x);
    }
    void pop()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int top = q2.front();
                q2.pop();
                if (q2.empty())
                    break;
                q1.push(top);
            }
        }
        else
        {
            while (!q1.empty())
            {
                int top = q1.front();
                q1.pop();
                if (q1.empty())
                    break;
                q2.push(top);
            }
        }
    }
    int top()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int top = q2.front();
                q2.pop();
                q1.push(top);
                if (q2.empty())
                    return top;
            }
        }
        else
        {
            while (!q1.empty())
            {
                int top = q1.front();
                q1.pop();
                q2.push(top);
                if (q1.empty())
                    return top;
            }
        }
    }

    bool empty(){
        return q1.empty() && q2.empty();
    }
};

int main()
{

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    s.pop();
    s.pop();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }


    return 0;
}