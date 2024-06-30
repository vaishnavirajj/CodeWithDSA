#include<iostream>
using namespace std;
int searchInArray(int arr[],int size,int target,int index ) {
    //base case or if not found
    if(index==size) {
        return false;
    }
    //if found
    if(arr[index]==target) {
        return true;
    }
    //recurrence relation
    bool ans=searchInArray(arr,size,target,index+1);
    return ans;

}
int main () {
    int arr[]={10,60,70,50,40,90};
    int size=6;
    int index=0;
    int target=50;
    cout<<searchInArray(arr,size,target,index);

}