#include<iostream>
using namespace std;
int peakIndexInMountainArray(int arr[],int size) {
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<e) {
        if(arr[mid]<arr[mid+1]) {
            // am on line A
            //move right
            s=mid+1;
        }

        else {
            //am on line B
            //or am on ans
            e=mid;

        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main() {
    int arr[]={10,20,30,80,70,55,45,35,25};
    int size=9;
    cout<<"Peak index is: "<<peakIndexInMountainArray(arr,size);
}