//Printing Hollow rectangle

#include<iostream>
using namespace std;
int main() {
    int rows;   //no of rows
    int cols;   //no of columns
    cout<<"enter the no of rows "<<endl;
    cin>>rows;
    cout<<"enter the no of cols "<<endl;
    cin>>cols;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            if(i==0 || i==rows-1 || j==0 || j==cols-1) {
                cout<<"*"<<" ";
            }
            else {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

}