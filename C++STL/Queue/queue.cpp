//First In First Out
#include<iostream>
#include<queue>
using namespace std;
int main () {
    queue<int> q;
    queue<int> q1;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q1.push(11);
    q1.push(21);
    q1.push(31);
    q1.push(41);



    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;

    cout<<"Size: "<<q.size()<<endl;

    q.pop();
    cout<<"Size after pop: "<<q.size()<<endl;

    if(q.empty()==true) {
        cout<<"queue is empty";
    }
    else {
        cout<<"queue is not empty";
    }
    
    cout<<endl;


    //swap
    q.swap(q1);
    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;

    //queue<string>q;
    // q.push("vaishnavi");
    // q.push("raj");
    // q.push("btech cse");
    // cout<<"size of q--> "<<q.size()<<endl;
    
    // cout<<"first elemnts--> "<<q.front()<<endl;
    // q.pop();
    // cout<<"first elemnts--> "<<q.front()<<endl;
    // q.pop();
    // cout<<"first elemnts--> "<<q.front()<<endl;


}

    
















































   
    

