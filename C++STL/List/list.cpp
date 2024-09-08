#include<iostream>
#include<list>
using namespace std;
int main () {
    list<int>l;
    l.push_back(23);
    l.push_front(34);
    
    for (int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of l--> "<<l.size()<<endl;
    l.pop_front();
    cout<<"size of l--> "<<l.size()<<endl;
    l.erase(l.begin(),l.end());
    cout<<"size of l--> "<<l.size()<<endl;


    //Doubly-linkedList
//Allow fast insertions and removals anywhere in the list
//No random access like vectors

    //creation
    list<int> myList;

    //insertion
    myList.push_back(10);
    //10
    myList.push_back(20);
    //10->20
    myList.push_back(30);
    // 10->20->30
    myList.push_back(40);
    //10->20->30->40

    myList.push_front(100);
    //100->10->20->30->40
    myList.pop_back();
    //100->10->20->30
    myList.pop_front();
    //10->20->30
    myList.push_back(10);

    
    cout<<"front element: "<<myList.front()<<endl;
    cout<<"back element: "<<myList.back()<<endl;

    //Traversing the list
    cout<<"before removing: ";
    list<int>::iterator it=myList.begin();
    while(it != myList.end()) {
        cout<< *it <<" ";
        it++;
    }
    cout<<endl;

    //remove(const value)-->remove the values that are equal to specified value

    myList.remove(10);

    cout<<"after removing: ";
    list<int>::iterator it2 =myList.begin();
    while(it != myList.end()) {
        cout<< *it2 <<" ";
        it2++;
    }
    cout<<endl;






    cout<<"Size of list: "<<myList.size()<<endl;;
    myList.clear();  //Clear all element in the list
    cout<<"Size of list after clear: "<<myList.size()<<endl;;
    
    if(myList.empty()==true) {
        cout<<"List is empty";

    }
    else {
        cout<<"list is not empty";
    }


    //Swapping
    list<int> first;
    list<int> second;
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.push_back(14);

    second.push_back(21);
    second.push_back(22);
    second.push_back(23);
    second.push_back(24);

    first.swap(second);

    for (int val:first) {
        cout<<val<<" ";
    }

    cout<<endl;

    for (int val:second) {
        cout<<val<<" ";
    }

    cout<<endl;



















































   
}

}
