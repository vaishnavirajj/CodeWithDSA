#include<iostream>
using namespace std;
void printAllEven(int arr[],int size,int index) {
    //base case
    if(index==size){
        return;
    }
    //1case
    if(arr[index]%2==0) {
        cout<<arr[index]<<" ";
    }
    //recursive call
    printAllEven(arr,size,index+1);

}
int main () {
    int arr[]={2,4,5,7,8,9,33,43,24,68};
    int size=10;
    int index=0;
    cout<<"All even numbers present in an array are: ";
    printAllEven(arr,size,index);

}