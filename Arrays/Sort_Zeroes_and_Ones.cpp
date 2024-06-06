#include<iostream>
using namespace std;
void sortZeroOne(int arr[] , int size) {
     int countZero=0;
    int countOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0) {
            countZero++;

        }
        if(arr[i]==1){
            countOne++;
        }
    }
    
    for (int i=0;i<countZero;i++) {
        cout<<0<<" ";
    }
    for (int j=countZero;j<size;j++){
        cout<<1<<" ";
    }
}
int main() {
    int size;
    cin>>size;
    int arr[size];
    //taking input
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    //printing the array
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sortZeroOne(arr,size);
   

}