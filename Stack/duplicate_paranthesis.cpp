#include <bits/stdc++.h>
using namespace std;

bool duplicateParentheses(string str){
    
    stack <char> Stack;
  
    for (char ch : str)
    {
        if (ch == ')')
        {
            char top = Stack.top();
            Stack.pop();
  
            int elementsInside = 0;
            while (top != '(')
            {
                elementsInside++;
                top = Stack.top();
                Stack.pop();
            }
            if(elementsInside < 1) {
                return true;
            }
        }
  
        else
            Stack.push(ch);
    }
  
    return false;
    
}

int main(){

    string s;
    cin >> s;

    if(duplicateParentheses(s))
        cout << "Yes, there are extra paranthesis" << endl;
    else 
        cout << "No, there are not extra paranthesis" << endl;

    return 0;
}
