//For Descending order sorted array

#include<iostream>
#include<vector>
using namespace std;
int binarySearchDescend(vector<int> &nums, int n ,int target)  {
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e) {
        if (target == nums[mid]) {
            return mid;   //mid is the index 
        }

        else if (target>nums[mid]) {
            e=mid-1;
        }

        else if (target<nums[mid]) {
            s=mid+1;
        }
        mid =s+ (e-s)/2;

        }
        return -1;
    }


int main () {
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }

    //printing the array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int target;
    cin>>target;
    int target_index= binarySearchDescend(arr , size , target);
    if(target_index!=-1) {
        cout<<"The index of the target number is: "<<target_index<<endl;
    }
    else {
        cout<<"Target is not present in the array"<<endl;
    }
}