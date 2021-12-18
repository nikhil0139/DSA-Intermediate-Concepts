#include <bits/stdc++.h>
#include"list.h"
using namespace std;

int main()
{

    LinkedList lst;

    lst.push_back(2);
    lst.push_front(1);
    lst.push_back(4);
    lst.push_front(0);
    lst.push_back(5);
    lst.push_back(6);

    lst.insert(3, 3);
    lst.insert(9, 0);

    lst.print();

    return 0;
}