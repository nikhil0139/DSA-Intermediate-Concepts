#include <bits/stdc++.h>
#include "list.h"
using namespace std;

bool checkCycle(Node *ptr)
{
    Node *slow = ptr, *fast = ptr;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }
    return false;
}

void removeCycle(Node *ptr)
{
    Node *slow = ptr, *fast = ptr, *temp;

    while (fast && fast->next)
    {
        slow = slow->next;
        temp = fast;
        fast = fast->next->next;

        // when cycle is detected
        if (slow == fast)
        {
            // for the case when cycle is at head of linked list
            if (slow == ptr)
            {
                while (slow->next != ptr)
                {
                    slow = slow->next;
                }
                slow->next = NULL;
            }
            // for the case when cycle is at node other than head of linked list
            else
            {
                slow = ptr;
                while (slow->next != fast->next)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                fast->next = NULL;
            }
            return;
        }
    }
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

    Node *temp = new Node(1);
    lst1.getTail()->next = temp;
    temp->next = lst1.getHead();

    if (checkCycle(lst1.getHead()))
    {
        cout << "Cycle is Present" << endl;
        removeCycle(lst1.getHead());
        cout << "After removing cycle, linked list is : " << endl;
        lst1.print();
    }
    else
    {
        cout << "Cycle is not Present" << endl;
    }

    return 0;
}