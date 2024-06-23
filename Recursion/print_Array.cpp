//Printing array using recursion


#include<iostream>
using namespace std;
void printArray(int arr[],int size, int index){
    //base condition
    if (index==size) {
        return;
    }
    cout<<arr[index]<<" ";
    printArray(arr,size,index+1);
}
int main() {
    int arr[]={10,20,30,40,50};
    int index=0;
    int size=5;
    printArray(arr,size,index);
}