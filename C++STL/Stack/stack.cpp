//In stack ---> Last In first out
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("vaishnavi");
    s.push("raj");
    s.push("btech cse");
    cout<<"first elemnts--> "<<s.top()<<endl;
    s.pop();
    cout<<"first elemnts--> "<<s.top()<<endl;
    s.pop();
    cout<<"first elemnts--> "<<s.top()<<endl;
    

}
