#include<iostream>
using namespace std;
int main () {
    //creation
    char arr[100];   //here 100 is size of a character array
    cout<<"Enter you name: "<<endl;
    //cin>>arr;

    cin.getline(arr, 80, '\t');
    //Delimeter solution--->cin.getline(array,size,delimeter)

    cout<<"Your name is: "<<arr<<endl;
    // for (int i=0;i<100;i++) {
    //     cout<<(int)arr[i]<<endl;
    // }
}

