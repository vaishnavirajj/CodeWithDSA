#include<iostream>
#include<stack>
using namespace std;
int main () {
    //creation
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    //size 
    cout<<s.size()<<endl;
    //check empty or not
    cout<<s.empty()<<endl;
    //peek element 
    cout<<s.top()<<endl;
    //removal
    s.pop();
    cout<<s.top()<<endl;
    return 0;


}
