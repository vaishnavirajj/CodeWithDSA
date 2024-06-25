//First In first Out
#include<iostream>
#include<queue>
using namespace std;
int main () {
    queue<string>q;
    q.push("vaishnavi");
    q.push("raj");
    q.push("btech cse");
    cout<<"size of q--> "<<q.size()<<endl;
    
    cout<<"first elemnts--> "<<q.front()<<endl;
    q.pop();
    cout<<"first elemnts--> "<<q.front()<<endl;
    q.pop();
    cout<<"first elemnts--> "<<q.front()<<endl;
    

}
