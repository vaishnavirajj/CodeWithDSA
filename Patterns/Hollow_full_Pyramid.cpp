//print hollow pyramid

#include<iostream>
using namespace std;
int main() {
    int rows;
    cin>>rows;
    for (int i=0;i<rows;i++){
        for (int j=0;j<rows-i-1;j++) {
            cout<<" ";
         
    }
    for (int j=0;j<i+1;j++) {
        if(j==0 || j==i+1-1 ||i==rows-1)  {
        cout<<"*";
    }
    else {
        cout<<" ";
    }
   cout<<" ";
}

 cout<<endl;
}}
