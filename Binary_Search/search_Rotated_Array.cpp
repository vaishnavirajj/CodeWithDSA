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
            //at pivot index
            return mid;

        }

        mid=s+(e-s)/2;

}
        return -1;

}

int binarySearch(int arr[],int size,int s,int e,int target) {
    s=0;
    e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e) {
        if(arr[mid]==target) {
            return mid;

        }
        if(arr[mid]<target) {
            s=mid+1;
        }

        if(arr[mid]>target) {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }

    return -1;
}

int searchInRotatedArray(int arr[],int size,int target) {
    int pivotIndex=findPivotIndex(arr,size);
    if(target>=arr[0] && target<=arr[pivotIndex]) {
        int ans=binarySearch(arr,size,0,pivotIndex,target);
        return ans;

    }
    else {
        int ans=binarySearch(arr,size,pivotIndex+1,size-1,target);
        return ans;
    }

    return -1;
    

}
int main() {
    int arr[]={50,60,70,10,20,30,40};
    int size=7;
    int target=20;
    int targetIndex=searchInRotatedArray(arr,size,target);
    cout<<"Target value in rotated array is: "<<targetIndex;
}