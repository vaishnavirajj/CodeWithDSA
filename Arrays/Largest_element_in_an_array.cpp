//Largest element in an array

#include<iostream>
using namespace std;
int largestElementInArray (int arr[] , int size) {
    int largest = arr[0];
    for (int i=1 ;i<size-1 ;i++) {
        if (arr[i]>largest) {
            largest=arr[i];
        }
}
       return largest;
}
//int main() {
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    int arr[size];
    //Taking input in an array
    for (int i=0 ;i<size ;i++) {
        cin>>arr[i];
    }
    int max_num = largestElementInArray(arr,size);
    cout<<"Largest element in an element is: "<<max_num; 

//}

//TimeComplexity is : O(n)
//SpaceComplexity is : O(n)