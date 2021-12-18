#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data;

public:
    Node *next;
    Node *prev;
    Node(int d) : data(d), next(NULL), prev(NULL) {}
    int getData()
    {
        return data;
    }
};

void print(Node *ptr)
{
    while (ptr)
    {
        cout << ptr->getData() << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

void insert(Node *&head, int d)
{
    Node *n = new Node(d);
    Node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next)
        temp = temp->next;

    temp->next = n;
    n->prev = temp;
}

void deleteAtPos(Node* &head, int pos)
{

    Node *temp = head;

    if (pos == 1)
    {
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;
    }

    int c = 1;
    while (temp && c != pos)
    {
        temp = temp->next;
        c++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete (temp);
}

int main()
{
    Node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    insert(head, 6);
    insert(head, 7);
    print(head);

    deleteAtPos(head, 1);
    print(head);

    deleteAtPos(head, 3);
    print(head);

    return 0;
}