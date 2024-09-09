//double ended queue
// similar to vectors but allow efficient insertion and removal from both end 
//suitable when elements need to be inserted or removed frequently from the front or back



#include<iostream>
#include<deque>
using namespace std;
int main () {
    deque<int>dq;
    //insertion fron back
    dq.push_back(20);
    //20
    dq.push_back(30);
    //20 ,30
    dq.push_back(40);
    //20,30,40
    dq.push_back(50);
    //20,30,40,50
    //insertion from front
    dq.push_front(60);
    //60,20,30,40,50
    dq.push_front(70);
    //70,60,20,30,40,50

    //removing from front
    dq.pop_front();
    //60,50,20,30,40,50

    //removing from back
    dq.pop_back();
    //60,50,40,30,40

    cout<<"Size: "<<dq.size() <<endl;

    cout<<"Front element: "<<dq.front() <<endl;
    cout<<"back element: "<<dq.back() <<endl;

    //traversing
    deque<int>::iterator it=dq.begin();
    while(it != dq.end()) {
        cout<< *it <<" ";
        it++;
    }
    cout<<endl;



   

}
