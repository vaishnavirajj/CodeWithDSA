//Printing Inverted Half Pyramid

#include<iostream>
using namespace std;
int main () {
    int n; 
    cout<<"enter no of rows: ";
    cin>>n; //taking input
    for (int i=0;i<n;i++) {
        for (int j=0; j<n-i; j++) {
            cout<<"* ";
        } 
        cout<<endl;
    }
}