#include<iostream>
#include<array>
using namespace std;
int main () {
    //int basic[]={10,20,30,40,50};//normal array is static array
    array<int,5>a={10,20,30,40,50}; //array stl is also static array 
    int n=a.size();

    
    for (int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Empty or not--> "<<a.empty()<<endl;


}
