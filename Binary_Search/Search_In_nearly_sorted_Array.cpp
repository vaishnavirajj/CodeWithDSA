//Given an sorted array of size N , some elements of arrays are moved to either of the adjacent positions, i.e., arr[i] may be present
// at arr[i+1] or arr[i-1] i.e, arr[i]  can only be swapped with either arr[mid-1] or arr[mid+1].The task is to search for an element 
// in this array

//Input: arr[]={10,3,40,20,50,80,70}
// key=40  Output:2
//key:90   Output:-1

#include<iostream>
using namespace std;
int applyBinarySearch(int arr[],int size,int target) {
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e) {
        if(arr[mid]==target) {
            return mid;
        }

        if(arr[mid+1]==target) {
            return mid+1;
        }

        if(arr[mid-1]==target) {
            return mid-1;
        }

        if(target>arr[mid]) {
            //move right
            s=mid+2;
        }

        else {
            //move left
            e=mid-2;
        }

        mid=s+(e-s)/2;
    }
    return -1;

}
int main() {
    int arr[]={10,3,40,20,50,80,70};
    int size=7;
    int target=10;
    int ans=applyBinarySearch(arr,size,target);
    cout<<"Key is at Index: "<<ans<<endl;

}

