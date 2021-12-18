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

int interSection(Node *a, Node *b){

    int l1 = 0, l2 = 0;
    Node *x = a, *y = b, *ptr1, *ptr2;

    while(x){
        l1++;
        x = x->next;
    }

    while(y){
        l2++;
        y = y->next;
    }
    int d;

    //cout << l1 << " " << l2 << endl;

    if(l1 > l2){
        d = l1 - l2;
        ptr1 = a;
        ptr2 = b;
    }
    else{
        d = l2 - l1;
        ptr1 = b;
        ptr2 = a;
    }

    //cout << d << " " << ptr1->getData() << " " << ptr2->getData() << endl;

    int i=1;
    while(i <= d){
        ptr1 = ptr1->next;
        i++;
        if(ptr1 == NULL)
            return -1;
    }

    while((ptr1 != ptr2) && ptr1 && ptr2){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if(!ptr1 || !ptr2)
        return -1;

    return ptr1->getData();
}


int main()
{

    LinkedList lst1;

    lst1.push_back(3);
    lst1.push_back(2);
    lst1.push_back(7);
    lst1.push_back(6);
    lst1.push_back(8);
    lst1.push_back(1);
    Node *t = lst1.getHead();
    t = t->next->next->next->next;
    lst1.print();

    LinkedList lst2;

    lst2.push_back(4);
    lst2.push_back(8);
    lst2.push_back(9);
    lst2.push_back(6);
    lst2.push_back(7);
    lst2.push_back(1);
    Node *p = lst2.getTail();
    p->next = t;
    lst2.print();

    cout << interSection(lst1.getHead(), lst2.getHead()) << endl;

    return 0;
}