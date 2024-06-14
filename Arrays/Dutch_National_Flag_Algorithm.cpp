#include<iostream>
#include<utility>
using namespace std;

void dutchNationalFlagAlgo(int arr[],int size) {
    int left=0;
    int right=size-1;
    int i=0;
    while(i<=right) {
        if(arr[i]==0) {
            swap(arr[i],arr[left]);
            i++;
            left++;
        }

        else if(arr[i]==2) {
            swap(arr[i],arr[right]);
            right--;
            //no need of i++
        }

        else {
            i++;
        }
    }

    //printing the sorted array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    //printing the array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Sorted array: "<<endl;
    dutchNationalFlagAlgo(arr,size);

}
