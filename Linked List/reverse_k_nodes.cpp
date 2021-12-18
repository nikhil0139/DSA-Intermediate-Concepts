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

Node *reverse_k_nodes(Node *ptr, int k)
{
    if (ptr == NULL)
        return NULL;

    Node *prev = NULL, *curr = ptr, *next;
    int c = 1;
    while (curr && c <= k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        c++;
    }

    if (next)
        ptr->next = reverse_k_nodes(next, k);

    return prev;
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

    int k;
    cin >> k;

    Node *t = reverse_k_nodes(lst.getHead(), k);
    print(t);

    return 0;
}