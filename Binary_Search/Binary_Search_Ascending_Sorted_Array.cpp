//To apply binary seach algorithm array must be sorted in any ascending or descending order


// This code is for increasing order sorted array

#include<iostream>
using namespace std;
int binarySearchForAscending(int nums[] , int target,int n) {
   
    int s=0;
    int e=n-1;
 
    int mid= s+ (e-s)/2;
    while (s<=e) {
        
        if (target==nums[mid]) {
            return mid;
        }

        else if(target>nums[mid]){
            s=mid+1;

        }
        else if(target<nums[mid]) {
            e=mid-1;
        }
        mid= s+ (e-s)/2;
    }
    return -1;

}

int main () {
   int size;
   cin>>size;
   int arr[size];
    //input
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
    
    //printing array
    for (int i=0;i<size;i++) {
        
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    
    int target;
    cin>>target;

    int index =binarySearchForAscending(arr,target,size);

    if(index!=-1){
    cout<<"The index of the target number is "<<index<<endl;
    }
    else {
        cout<<"The target is not present in the array "<<index<<endl;

    }

}
