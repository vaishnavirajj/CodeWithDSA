#include<iostream>
using namespace std;
int main () {
    int n=9;
    for(int i=0;i<n/2+1;i++) {
        for (int j=0;j<=i;j++) {
        cout<<"*";
        } 
        cout<<endl;
    }
    for (int i=0;i<n/2-1;i++) {
        for (int j=n/2-1;j>=i;j)
    }

}