//In Map values store in key-value pair
//values can be same but key will be unique
#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string>m;
    m[1]="vaishnavi";
    m[2]="raj";
    m[3]="shelley";
    m.insert({4,"bheem"});
    m.insert({5,"raju"});
    for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
cout<<"finding 3--> "<<m.count(3)<<endl;   
m.erase(3);
cout<<"print after erasing 3: "<<endl;
for (auto i:m) {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

auto it=m.find(4);
for (auto i=it;i!=m.end();i++) {
    cout<<(*i).first<<endl;
}



}

