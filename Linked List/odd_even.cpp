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

Node *evenAfterOddPos(Node *ptr){

    Node *odd = ptr, *even = ptr->next;
    Node *evenStart = even, *oddStart = odd;

    while(odd->next && even->next){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenStart;

    
    return oddStart;
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
    lst.push_front(9);
    lst.push_front(8);
    lst.push_front(7);

    lst.print();

    Node *t = evenAfterOddPos(lst.getHead());

    print(t);

    return 0;
}