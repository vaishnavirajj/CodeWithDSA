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
    int rows,cols;
    cin>>rows>>cols;

    for (int i=0;i<rows;i++){
        for (int j=0; j<cols; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
}
return 0;
}

