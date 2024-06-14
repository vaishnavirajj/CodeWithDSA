#include<iostream>
using namespace std;
int missingNumber (int arr[], int n) {
    int sum=0;

    for (int i=0;i<n;i++) {
        //adding the sum of the elements present in an array
        sum=sum+arr[i];
    }
    
    //sum of total element 
    int totalSum=(n*(n+1))/2;   
    int find = totalSum-sum;
    return find;

}
int main() {
    int size;
    cin>>size;
    int arr[size];

    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"printed original array: "<<endl;
   
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int missing_number = missingNumber(arr,size);
    cout<<"Missing number in an array is: "<<missing_number<<endl;

}


