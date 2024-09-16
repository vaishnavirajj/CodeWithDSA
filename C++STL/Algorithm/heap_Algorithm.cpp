#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main () {
    vector<int> arr;
    arr.push_back(21);
    arr.push_back(34);
    arr.push_back(10);
    arr.push_back(23);
    arr.push_back(45);

    make_heap(arr.begin() ,arr.end());  //convert a range into max heap

    for (int i : arr) {
        cout<< i <<" ";
    }
    cout<<endl;
    
    //insertion
    arr.push_back(99);
    push_heap(arr.begin() , arr.end());

    for (int i : arr) {
        cout<< i <<" ";
    }
    cout<<endl;

    //deletion
    pop_heap(arr.begin() , arr.end());
    arr.pop_back();

    for (int i : arr) {
        cout<< i <<" ";
    }
    cout<<endl;

    sort_heap(arr.begin() , arr.end());
    for (int i : arr) {
        cout<< i <<" ";
    }
    cout<<endl;


}