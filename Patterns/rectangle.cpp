//Printing Rectangle

#include<iostream>
using namespace std;
int main() {

    for (int row=0;row<3;row++){
        for (int col=0;col<5;col++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
}
}

//Better Solution

#include<iostream>
using namespace std;
int main() {
    int breadth,length;
    cin>>breadth>>length;

    for (int row=0;row<breadth;row++){
        for (int col=0;col<length;col++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
}
return 0;
}

