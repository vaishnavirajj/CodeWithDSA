#include<iostream>
using namespace std;
void shiftElementsByK(int arr[7], int size) {
    int temp1=arr[size-1];
    int temp2=arr[size-2];
    for (int i=0;i<size-2;i++) {
        arr[i]=arr[i+2];
    }
    arr[0]=temp2;
    arr[1]=temp1;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int size=7;
    int arr[7]={10,20,30,40,50,60,70};
    //print array before shift
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //print array after shift
    shiftElementsByK(arr,size);


}