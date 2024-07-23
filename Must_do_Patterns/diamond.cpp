#include<iostream>
using namespace std;
int main () {
    int n=10;  //height of diamond
    for(int i=0;i<n/2;i++) {
        //space for full pyramid
        for (int j=0;j<n/2-i;j++) {
            cout<<" ";
        }

        //star for full pyramid
        for (int j=0;j<2*i+1;j++) {
            cout<<"*";
            
        }
        cout<<endl;

}    
   for(int i=0;i<n/2;i++) {
    //spaces for inverted full pyramid
        for(int j=0;j<i+1;j++) {
            cout<<" ";

        }
        //star for inverted full pyramid
        for(int j=0;j<2*(n/2-i)-1;j++) {
            cout<<"*";
        }
        cout<<endl;
        }
        
    }

        



