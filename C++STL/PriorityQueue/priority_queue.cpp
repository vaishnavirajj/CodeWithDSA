//heap
//Elements are stored in a way that allows the retrieval of the highest-priority element efficiently 


#include<iostream>
#include<queue>
using namespace std;
int main () {
    //creation
    priority_queue<int> pq;
    //max heap--->maximum value-->gives highest priority to maximum value

    //insertion
    pq.push(10);
    //10
    pq.push(43);
    // 43,10
    pq.push(65);
    // 65,43,10
    pq.push(21);
    //65,43,21,10

    pq.pop();  //removes highest priority element

    cout<<pq.top()<<endl;
    cout<<"Size: "<<pq.size()<<endl;

    //accessing value
    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    if(pq.empty()==true) {
        cout<<"pq is empty"<<endl;
    }

    else {
        cout<<"pq is not empty"<<endl;
    }


    min heap--->gives Highest priority to minimum value

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    // 10
    pq.push(31);
    // 10,31
    pq.push(20);
    // 10,20,31
    pq.push(13);
    // 10,13,20,31

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<"Size: "<<pq.size()<<endl;
    

    while (!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;


    if(pq.empty() == true) {
        cout<<"priority is empty"<<endl;
    }

    else {
        cout<<"priority is not empty"<<endl;
        
    }


    priority_queue<int>p1;
    priority_queue<int>p2;
    p1.push(20);
    p1.push(21);
    p2.push(30);
    p2.push(31);

    p1.swap(p2);

    while(!p1.empty()) {
        cout<<p1.top()<<" ";
        p1.pop();
    }
    cout<<endl;

    
    //max heap
    priority_queue<int>maxi;
    //min heap
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"size---> "<<maxi.size()<<endl;
    int n=maxi.size();
    for (int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
   cout<<endl;
   mini.push(1);
   mini.push(3);
   mini.push(2);
   mini.push(0);
    for (int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

}
