//Square root 
#include<iostream>
using namespace std;
int mysqrt(int x) {
    int s=0;
    int e=x;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e) {
         if(mid*mid==x) {
        return mid;
    }

    if(mid*mid>x) {
        e=mid-1;
    }

    if(mid*mid<x){
        //may or may not be
        ans=mid; //store
        s=mid+1; //compute
    }
    mid=s+(e-s)/2;

}
return -1;
   
}
int main () {
    int n;
    cout<<"enter the square root number: ";
    cin>>n;
    cout<<mysqrt(n);
}