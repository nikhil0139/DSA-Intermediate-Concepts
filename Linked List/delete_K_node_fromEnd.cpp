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

Node *deleteNthNodeFromEnd(Node *ptr, int k){



    Node *temp = ptr, *t = ptr;
    for(int i=1;i<=k+1;i++){
        if(temp == NULL){
            ptr = ptr->next;
            t->next = NULL;
            delete(t);
            return ptr;
        }
        temp = temp->next;
    }

    while(temp){
        temp = temp->next;
        t = t->next;
    }

    Node *n = t->next;
    t->next = n->next;
    n->next = NULL;
    delete(n);
    return ptr;
}


int main()
{

    LinkedList lst1;

    lst1.push_back(3);
    lst1.push_back(6);
    lst1.push_back(7);
    lst1.push_back(0);
    lst1.push_back(8);
    lst1.push_back(4);
    lst1.push_back(9);
    lst1.print();

    
    Node *ptr = deleteNthNodeFromEnd(lst1.getHead(), 7);
    print(ptr);

    return 0;
}