//Stack has an property of reversing the value

#include<iostream>
#include<stack>
using namespace std;
int main () {
    stack<char> s;
    string name="VaishnaviRaj";
    
    //insertion of characters into the stack
    for (int i=0;i<name.length();i++) {
        char ch=name[i];
        s.push(ch);
    }

    //retreival of characters from the stack
    while(!s.empty()) {
        cout<<s.top();
        s.pop();

    }
    return 0;

    
} 