#include <bits/stdc++.h>
using namespace std;

class LinkedList;

class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(NULL) {}
    int getData()
    {
        return data;
    }

    Node *getNext()
    {
        return next;
    }
    friend class LinkedList;
};

class LinkedList
{
    Node *head, *tail;

    int helper(Node *ptr, int key)
    {
        if (ptr == NULL)
            return -1;
        if (ptr->data == key)
            return 0;

        int t = helper(ptr->next, key);

        if (t != -1)
            return t + 1;
        else
            return -1;
    }

public:
    LinkedList() : head(NULL), tail(NULL) {}

    Node *getHead()
    {
        return head;
    }

    Node *getTail()
    {
        return tail;
    }

    void push_front(int d)
    {
        if (head == NULL)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            n->next = head;
            head = n;
        }
    }
    void push_back(int d)
    {
        if (head == NULL)
        {
            Node *n = new Node(d);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(d);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int d, int pos)
    {
        if (pos == 0)
        {
            push_front(d);
            return;
        }

        Node *temp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *n = new Node(d);
        n->next = temp->next;
        temp->next = n;
    }

    int searchIte(int key)
    {
        Node *ptr = head;
        int idx = 0;
        while (ptr)
        {
            if (ptr->data == key)
                return idx;
            idx++;
            ptr = ptr->next;
        }
        return -1;
    }

    int searchRec(int key)
    {
        int ans = helper(head, key);
        return ans;
    }

    void pop_front()
    {
        if (head->next == NULL)
        {
            delete head;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head->next == NULL)
        {
            delete head;
            return;
        }

        Node *p = head, *q = NULL;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }

        q->next = NULL;
        delete p;
    }

    void delete_all()
    {
        if (head->next == NULL)
        {
            delete head;
            return;
        }

        Node *temp;

        while (head)
        {
            temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_pos(int pos)
    {
        if (pos == 0)
        {
            delete head;
            return;
        }

        Node *p = head, *q = NULL;
        for (int i = 1; i <= pos; i++)
        {
            q = p;
            p = p->next;
        }

        q->next = p->next;
        p->next = NULL;
        delete p;
    }

    void print()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void reverse()
    {
        Node *prev = NULL, *curr = head, *temp;

        while (curr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head = prev;
    }

    Node *reverse_rec(Node *head)
    {
        if (head->next == NULL || head == NULL)
            return head;

        Node *temp = reverse_rec(head->next);

        head->next->next = head;
        head->next = NULL;
        return temp;
    }

    void appendKNodes(int k)
    {
        int c = 0, i = 1;
        Node *temp = head, *ptr = head, *t;

        while (temp)
        {
            c++;
            if (temp->next == NULL)
                t = temp;
            temp = temp->next;
        }

        while (ptr && i < c - k)
        {
            ptr = ptr->next;
            i++;
        }

        Node *next = ptr->next;
        ptr->next = NULL;
        t->next = head;
        head = next;
    }

    void insertInCLL(int val, int pos)
    {
        Node *n = new Node(val), *temp;
        if (head == NULL)
        {
            n->next = n;
            head = tail = n;
            return ;
        }
        else if (pos == 1)
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = n;
            n->next = head;
            head = n;
            return ;
        }

        int i = 1;
        while (temp && i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
        return ;
    }

    void deleteInCLL(int pos)
    {
        if (head->next == head)
        {
            head->next = NULL;
            delete(head);
            return ;
        }
        else if (pos == 1)
        {
            Node *temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = head->next;
            Node *t = head;
            head = head->next;
            t->next = NULL;
            delete(t);
            return ;
        }

        int i = 1;
        Node *temp = head;
        while (temp && i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *p = temp->next;
        temp->next = p->next;
        p->next = NULL;
        delete(p);
        return ;
    }
};