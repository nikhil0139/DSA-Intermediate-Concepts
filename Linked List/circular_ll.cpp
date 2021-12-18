#include <bits/stdc++.h>
#include "list.h"
using namespace std;

void print(Node *ptr)
{
    Node *temp = ptr;
    do
    {
        cout << ptr->getData() << "->";
        ptr = ptr->getNext();
    } while (ptr != temp);
    cout << endl;
}

int main()
{

    LinkedList lst;

    lst.insertInCLL(9, 3);
    //print(lst.getHead());

    lst.push_back(3);
    lst.push_back(6);
    lst.push_back(4);
    lst.push_front(5);
    lst.push_front(1);
    lst.push_front(2);
    Node *t = lst.getTail();
    Node *p = lst.getHead();
    t->next = p;
    print(lst.getHead());

    lst.insertInCLL(9, 3);
    lst.insertInCLL(9, 1);
    print(lst.getHead());

    lst.deleteInCLL(1);
    lst.deleteInCLL(3);
    print(lst.getHead());

    return 0;
}