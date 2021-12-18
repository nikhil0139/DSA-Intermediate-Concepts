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

Node *midPoint(Node *temp){
    Node *a = temp, *b = temp->next;

    while(b && b->next){
        a = a->next;
        b = b->next->next;
    }
    return a;
}

Node *mergeSort(Node *ptr){
    if(ptr == NULL || ptr->next == NULL)
        return ptr;
    
    Node *mid = midPoint(ptr);

    Node *a = ptr;
    Node *b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
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

    Node *t = mergeSort(lst.getHead());
    print(t);

    return 0;
}