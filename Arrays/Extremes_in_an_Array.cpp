#include<iostream>
using namespace std;
void printExtremeInAnArray(int arr[],int size){
    int left=0;
    int right=size-1;
    //printing the extremes of an array
    
        while(left<=right) {
            if (left==right){
                cout<<arr[left]<<endl;
            }
            else {
                 cout<<arr[left];
            //cout<<arr[right]<<" ";
            left++;
            right--;
            }
           
        }
    }   
        

int main() {
    int size;
    cin>>size;
    int arr[size];
    //Taking input in an array
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
    //printing the array
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    printExtremeInAnArray(arr,size);

}


// we will do tomorrow
