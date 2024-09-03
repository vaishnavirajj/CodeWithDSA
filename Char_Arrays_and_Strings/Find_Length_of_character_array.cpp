#include<iostream>
using namespace std;
int getLength(char arr[],int size) {
    int count=0;
    int index=0;
    
    // while loop

    while(arr[index]!='\0') {
        count++;
        index++;
    }
    return count;

    //for loop

    // for (index=0;index<size;index++) {
    //     if(arr[index]=='\0') {
    //         break;
    //     }

    //     else {
    //         count++;
    //     }
    // }
    // return count;
}
int main () {
    int size=20;
    char arr[size];
  //cin>>arr;
    cin.getline(arr,size,'\t');
    int length=getLength(arr,size);
    cout<<"length of the array is: "<<length<<endl;
    
    
}

//Time complexity-O(n)