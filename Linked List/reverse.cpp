#include<bits/stdc++.h>
#include"list.h"
using namespace std;

int main(){

    LinkedList lst;

    lst.push_back(3);
    lst.push_back(6);
    lst.push_back(4);
    lst.push_front(5);
    lst.push_front(1);
    lst.push_front(2);
    lst.print();

    lst.reverse();
    lst.print();

    return 0;
}