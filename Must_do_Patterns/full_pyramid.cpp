#include<iostream>
using namespace std;
int main() {
    int n;//no of rows
    cout<<"enter no of rows: ";
    cin>>n;
    for (int i=0;i<n;i++) {
        //print space 
        for(int j=0;j<=n-i+1;j++) {
            cout<<" "<<" ";

        }

        //print star
        for (int j=0;j<2*i+1;j++) {
            cout<<"* ";
        }
        cout<<endl;
    }


}