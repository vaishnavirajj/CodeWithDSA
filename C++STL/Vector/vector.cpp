//vector is a dynamic array
#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(10);//inserting elements
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for (int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size--> "<<v.size()<<endl;
    v.pop_back();//deleting elements
    cout<<"size--> "<<v.size()<<endl;
    
    //v.clear();
    //cout<<"size after clear--> "<<v.size()<<endl;

    //copying elements of v 
    vector<int>a(v);//copying into a
    for (int i:a) {
        cout<<i<<" ";
    }
    cout<<endl;

    
}
