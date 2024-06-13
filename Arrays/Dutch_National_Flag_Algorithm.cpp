#include<iostream>
using namespace std;
int main() {
    int size=14;
    int arr[size] ={1,0,2,1,0,0,1,2,2,1,0,0,1,2}
    int left=0;
    int right=size-1;
    int i=0;
    while (i<=right) {
        if(arr[i]==0){
            swap(arr[i],arr[left]);
            i++;
            left++;
             }
        else if(arr[i]==2) {
            swap(arr[i],arr[right]);
            right--;
        }
        else{
            i++;
        }

    }
    

}