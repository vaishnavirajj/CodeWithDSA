#include<iostream>
using namespace std;
void leftShiftBy1(int arr[] ,int size) {
    int temp=arr[0];
    for (int i=0;i<size-1;i++) {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     
}
int main() {
    int arr[7] = {34,29,31,43,59,62,74};
    int size =7;
    //print before shifting
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //print after shifting
    leftShiftBy1(arr , size);


}