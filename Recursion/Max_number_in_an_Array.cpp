#include<iostream>
#include<limits.h>
using namespace std;
int max(int a,int b) {
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
void maxNumberInArray(int arr[],int size,int index,int &maxNum){
    //base condition
    if(index==size) {
        return;
    }
    
    maxNum=max(maxNum,arr[index]);
    maxNumberInArray(arr,size,index+1,maxNum);

}

int main() {
    int arr[]={10,40,30,15,20,70};
    int size=6;
    int index=0;
    int maxNum=INT_MIN;
    maxNumberInArray(arr,size,index,maxNum);
    cout<<"greatest number in an array: "<<maxNum;
    cout<<endl;
 
}