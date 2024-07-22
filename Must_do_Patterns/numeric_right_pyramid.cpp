#include<iostream>
using namespace std;
int main () {
    int n; //no of digits
    cout<<"enter no:";
    cin>>n;
    for (int i=0;i<n;i++) {
        for(int j=1;j<=i+1;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
