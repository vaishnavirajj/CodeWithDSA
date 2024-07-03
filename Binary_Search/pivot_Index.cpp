#include<iostream>
using namespace std;
int findPivotIndex(int arr[],int size) {
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<=e) {
        
        if(s==e) {
            //for single element array
            return s;
        }

        if(mid+1<size && arr[mid]<arr[mid+1]) {
            //line A 
            //move right
            s=mid+1;
        }

        if(arr[s]<arr[mid]) {
            //line B
            //move left
            e=mid-1;
        }

        if(arr[mid]>arr[mid+1]){
            //at ans
            return mid;

        }

        mid=s+(e-s)/2;

}
        return -1;

}
int main() {
    int arr[]={50,60,70,80,10,20,30,40};
    int size=8;
    int pivotIndex=findPivotIndex(arr,size);
    cout<<pivotIndex;

}