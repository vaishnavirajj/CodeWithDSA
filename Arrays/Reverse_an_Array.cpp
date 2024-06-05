#include<iostream>
#include<utility>
using namespace std;
void reverseAnArray(int arr[] , int size) {
    int left=0;
    int right=size-1;
    while(left<=right){
        swap(arr[left] ,arr[right]);
        left++ ;
        right-- ;
}

//printing the reverse Array
for (int i=0;i<size;i++) {
    cout<<arr[i]<<" ";
}

}

//int main () {
    int size; //size of an array
    cout<<"enter size of an array: ";
    cin>>size;
    int arr[size];
    //taking input in an array
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
   
    reverseAnArray(arr,size);
    return 0;

//}