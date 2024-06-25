//Set stores unique element i.e,no elements store more than once
//it don't allow any modification, u can only create and delete
//Output will be in the sorted order

#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int>s;
    s.insert(10);
    s.insert(32);
    s.insert(5);
    s.insert(4);
    s.insert(20);
    for (auto i: s) {
        cout<<i<<" ";
    }
    cout<<endl;
    set<int>:: iterator it=s.begin();
    it++;
    //s.erase(it);
    cout<<"print after erase: "<<endl;
    for (auto i:s) {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"5 is present or not-->"<<s.count(5)<<endl;
    set<int>::iterator  itr=s.find(5);
    for (auto it=itr;it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;


}
