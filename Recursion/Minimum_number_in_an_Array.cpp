#include<iostream>
#include<limits.h>
using namespace std;
int minu(int a , int b) {
    if (a<b) {
        return a;
    }
    else{
        return b;
    }
}
void printMinimum(int arr[] , int n,int index,int &min){
    //base case
    if (index==n) {
        return;
    }
    min=minu(min,arr[index]);
    //recursive call
    printMinimum(arr,n,index+1,min);

}
int main () {
    int arr[]={30,20,50,10,40};
    int n=5;
    int index=0;
    int min=INT_MAX;
    printMinimum(arr,n,index,min);
    cout<<min;
}
