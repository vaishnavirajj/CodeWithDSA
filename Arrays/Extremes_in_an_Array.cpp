#include<iostream>
using namespace std;
void printExtremes(int arr[],int size) {
    int left=0;
    int right=size-1;

    //Printing the extremes
    while(left<=right) {
        if(left==right){
            cout<<arr[left]<<endl;
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
        }
        left++;
        right--;
    }
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<endl;
    printExtremes(arr,size);


    
}