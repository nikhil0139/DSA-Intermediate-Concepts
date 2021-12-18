#include <bits/stdc++.h>
using namespace std;

template <typename T>

class Stack
{
    vector<T> v;

public:
    void push(int d)
    {
        v.push_back(d);
    }
    void pop()
    {
        v.pop_back();
    }
    int isEmpty()
    {
        return (v.size() == 0);
    }

    T top()
    {
        return v.back();
    }
};

void insertAtBottom(Stack<int> &s, int d)
{
    if (s.isEmpty())
    {
        s.push(d);
        return;
    }

    int temp = s.top();
    s.pop();
    insertAtBottom(s, d);
    s.push(temp);
}

void print(Stack<int> s)
{
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    Stack<int> s;

    s.push(3);
    s.push(4);
    s.push(9);
    s.push(7);
    s.push(1);

    print(s);

    insertAtBottom(s, 6);
    print(s);


    return 0;
}