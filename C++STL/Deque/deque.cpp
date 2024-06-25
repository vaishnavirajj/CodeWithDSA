#include<iostream>
#include<deque>
using namespace std;
int main () {
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    for (int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of d---> "<<d.size()<<endl;
    d.pop_back();
    cout<<"size of d---> "<<d.size()<<endl;
    cout<<"empty or not---> "<<d.empty()<<endl;
    d.erase(d.begin(),d.end());
    cout<<"size of d after erasing all elements---> "<<d.size()<<endl;
   

}
