#include<iostream>
using namespace std;
int main () {
    int n; //no of rows
    cout<<"enter rows:";
    cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}