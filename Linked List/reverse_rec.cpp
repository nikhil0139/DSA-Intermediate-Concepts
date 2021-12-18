#include <bits/stdc++.h>
#include "list.h"
using namespace std;

void print(Node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->getData() << "->";
            ptr = ptr->getNext();
        }
        cout << endl;
    }

int main()
{

    LinkedList lst;

    lst.push_back(3);
    lst.push_back(6);
    lst.push_back(4);
    lst.push_front(5);
    lst.push_front(1);
    lst.push_front(2);
    lst.print();

    Node * t = lst.reverse_rec(lst.getHead());
    print(t);

    return 0;
}