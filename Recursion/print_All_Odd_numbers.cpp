#include<iostream>
using namespace std;
void printOddNum(int arr[],int size,int index) {
    //Base case
    if(index==size) {
        return;
    }
    //1case
    if(arr[index]%2==1){
    cout<<arr[index]<<" ";
    }
    //recursive call
    printOddNum(arr,size,index+1);
}
int main () {
    int arr[3]={2,3,7};
    int size=3;
    int index=0;
    printOddNum(arr,size,index);
}