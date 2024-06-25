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

}
