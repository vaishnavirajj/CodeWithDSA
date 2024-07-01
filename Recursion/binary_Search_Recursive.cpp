#include<iostream>
using namespace std;
int binarySearchRecursive(int arr[],int size,int s,int e,int target) {
    //Base case
    if(s>e) {
        return -1;
    }

    //1 case
    int mid=(s+e)/2;
    if(arr[mid]==target) {
        return mid;
    }
    
    //recursive call
    if(arr[mid]>target){
    //move left
    int e=mid-1;
    return binarySearchRecursive(arr,s,e,size,target);
    }

    else{
    //move right
    int s=mid+1;
    return binarySearchRecursive(arr,s,e,size,target);
    }

    
}

int main () {
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int s=0;
    int e=size-1;
    int target=60;
    cout<<binarySearchRecursive(arr,size,s,e,target);
   

}