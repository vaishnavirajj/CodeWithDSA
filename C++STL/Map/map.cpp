//In Map values store in key-value pair
//values can be same but key will be unique
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main() {
    //creation
    unordered_map<string, string>table;

    //insertion 1
    table["in"] ="India";

    //insertion 2
    table.insert(make_pair("en","England"));

    //insertion 3
    pair<string, string> p;
    p.first="br";
    p.second="brazil";
    table.insert(p);

    cout<<"Size: "<<table.size()<<endl;

    if(table.empty()==true) {
        cout<<"table is empty" <<endl;
    }

    else {
        cout<<"table is not empty" <<endl;
    }
    

    unordered_map<string ,string>::iterator it=table.begin();
    while (it != table.end( )) {
        pair<string ,string>p = *it;
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    if(table.find("in") != table.end()) {
        cout<<"key found"<<endl;

    }
    else{
      cout<<"key not  found"<<endl;
    }

    if(table.count("in") == 1) {
        cout<<"Key found"<<endl;
    }
    if(table.count("in") == 0) {
        cout<<"key not found"<<endl;
    }









































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

