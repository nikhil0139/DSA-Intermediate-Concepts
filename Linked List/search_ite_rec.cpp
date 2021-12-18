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

    int key;
    cout << "Enter which element you want to search : ";
    cin >> key;

    int find = lst.searchIte(key);

    if(find != -1)
        cout << "Element found at : " << find << endl;
    else    
        cout << "Element not found" << endl;


    int s = lst.searchRec(key);

    if(s != -1)
        cout << "Element found at : " << s << endl;
    else    
        cout << "Element not found" << endl;

}