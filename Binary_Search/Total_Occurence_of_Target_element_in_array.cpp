#include<iostream>
#include<vector>
using namespace std;
void findFirstOccurence(vector<int> &nums,int target , int &firstIndex) {
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid =s+(e-s)/2;

    while (s<=e) {
        if (target == nums[mid]){
            firstIndex=mid;
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
  void findLastOccurence(vector<int> &nums,int target,int &lastIndex) {
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e) {
        if (target==nums[mid]) {
            lastIndex=mid;
            s=mid+1;

        }

        if (target<nums[mid]) {
            e=mid-1;
        }

        if (target>nums[mid]) {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
}
int main() {
    int size;
    cin>>size;
    vector<int> arr(size);
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }

    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cin>>target;
    int firstIndex=-1;
    int lastIndex=-1;
    findFirstOccurence(arr,target,firstIndex);
    findLastOccurence(arr,target,lastIndex);
    
    int ans=(lastIndex-firstIndex)+1;
    
    cout<<"Total occurence of target element is: "<<ans<<endl;
    



}