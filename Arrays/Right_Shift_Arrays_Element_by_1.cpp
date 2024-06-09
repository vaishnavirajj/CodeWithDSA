#include<iostream>
#include<limits.h>
using namespace std;
void rightShiftBy1 (int arr[6],int size) {
    int temp=arr[size-1];
    for (int i=size-1;i>0;i--) {
        arr[i]=arr[i-1];
       
        
    }
     arr[0]=temp;
 
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main() {
    int size=6;
    int arr[6] ={23,45,56,76,87,43};
    //print before shift
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    //print after shift
    rightShiftBy1(arr,size);
    
    

}