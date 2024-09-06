//vector is a dynamic array that can grow and shrink on runtime

#include<iostream>
#include<vector>
using namespace std;
int main() {
    //creation

   //declare but didn't initialise and assign size
    vector<int>marks;

    
    //declare and assign size
   // vector<int>miles(10);

    //declare,initialize and assgin size
    vector<int>distance(5,10); 

    vector<int>marks;
    marks.push_back(90);
    marks.push_back(80);
    marks.push_back(70);
    marks.push_back(60);
    marks.push_back(50);

    //insert function  ---> insert(position , value)

    //erase function ----->erase the element in the vector

    marks.erase(marks.begin(), marks.end());
    cout<<marks.size()<<endl;

    marks.insert(marks.begin(),100);
    cout<<marks.front()<<endl;

    marks.clear();  //clear all the elements in the vector
    cout<<"Size: "<<marks.size()<<endl;

    cout<<marks.at(3)<<endl;
    cout<<marks[3]<<endl;  //use when vector size is assign or value is inserted by pushback function
    
    cout<<"Size: "<<marks.size()<<endl;
    cout<<"Capacity: "<<marks.capacity()<<endl;

    //we can reserve vector capacity
    marks.reserve(20);
    cout<<"Capacity after reserving: "<<marks.capacity()<<endl;
    

    cout<<*(marks.begin())<<endl;
    cout<<*(marks.end())<<endl;

    marks.pop_back();
    cout<<"Size: "<<marks.size()<<endl;

    cout<<marks.front()<<endl;
    cout<<marks.back()<<endl;

    if(marks.empty()==true) {
        cout<<"vector is empty"<<endl;
    }

    else {
        cout<<"vector is not empty"<<endl;
    }

    cout<<"Maximum size vector holds: "<<marks.max_size()<<endl;


    //Swap function

    vector<int>first;
    vector<int>second;

    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.push_back(14);
    first.push_back(15);

    second.push_back(10);
    second.push_back(20);
    second.push_back(30);
    second.push_back(40);
    second.push_back(50);

    first.swap(second);
    
    //for-each loop
    for (int i : first) {
        cout<<i<<" ";

    }
    cout<<endl;

    for (int i : second) {
        cout<<i<<" ";

    }
    cout<<endl;

    
    //Traversing the vector using iterator
    vector<int>::iterator it = first.begin();

    while(it != first.end()) {
        cout<< *it <<" ";
        it++;


    }
    cout<<endl;



// vector<int>v;
    // v.push_back(10);//inserting elements
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(50);

//    for (int i:v){
//         cout<<i<<" ";
//     }
    
//     cout<<endl;
//     cout<<"size--> "<<v.size()<<endl;
//     v.pop_back();//deleting elements
//     cout<<"size--> "<<v.size()<<endl;
    
    //v.clear();
    //cout<<"size after clear--> "<<v.size()<<endl;

    //copying elements of v 
   
    // vector<int>a(v);//copying into a
    // for (int i:a) {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    
}
