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

Node *merge(Node *a, Node *b){
    if(a == NULL)
        return b;
    if(b == NULL)
        return a;

    Node *temp;

    if(a->getData() < b->getData()){
        temp = a;
        temp->next = merge(a->next, b);
    }

    else{
        temp = b;
        temp->next = merge(a, b->next);
    }
    return temp;
}

int main()
{

    LinkedList lst1;

    lst1.push_back(3);
    lst1.push_back(6);
    lst1.push_back(7);
    lst1.print();

    LinkedList lst2;

    lst2.push_back(4);
    lst2.push_back(8);
    lst2.push_back(9);
    lst2.print();

    Node *t = merge(lst1.getHead(), lst2.getHead());
    print(t);

    return 0;
}