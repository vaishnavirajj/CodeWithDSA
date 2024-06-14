#include<iostream>
using namespace std; 
void rotateArray(int size , int arr[], int k) {
    int ans[size];
    for (int i=0;i<size;i++) {
        int newIndex=(i+k)%size;   //using modulus method
        ans[newIndex]=arr[i];  //copying elements from arr to ans

    }
  
    //copy the rotated values back to arr
    for (int i=0;i<size;i++) {
       arr[i] =ans[i];  
    }
  
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    int k;
    cin>>k;
    for (int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"printing the original array:" <<endl;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArray(size,arr,k);

    cout<<"Rotated array: "<<endl;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

       return 0;


  }










