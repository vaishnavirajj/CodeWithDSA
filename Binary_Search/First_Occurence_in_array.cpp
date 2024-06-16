//non-decreasing array

#include<iostream>
#include<vector>
using namespace std;
void findFirstOccurence(vector<int> &nums,int target , int &ansIndex) {
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;

    while (s<=e) {
        if (target == nums[mid]){
            ansIndex=mid;
            e=mid-1;

        }

        if(target>nums[mid]) {
            s=mid+1;
        }

        if (target<nums[mid]) {
            e=mid-1;
        }

        mid=s+(e-s)/2;
    }
  


}
int main () {
    int size;
    cin>>size;
    vector<int> arr(size);
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }

    //printing the array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int target;
    cin>>target;
    int ansIndex=-1;

    findFirstOccurence(arr,target,ansIndex);
    cout<<"The index of the first occurence of the target is: "<<ansIndex<<endl;



}