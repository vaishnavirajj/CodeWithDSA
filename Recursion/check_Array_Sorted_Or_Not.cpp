#include<iostream>
using namespace std;
bool checkSortedArray(int arr[],int size,int index) {
    //base condition
    if(index==size-1) {
        //single element array treated as SORTED array
        return true ;
    }
    bool currAns=false;
    bool recAns=false;

    //1 case
    if(arr[index+1]>arr[index]) {
            currAns=true;
    }
    
    //recursive call
    recAns=checkSortedArray(arr,size,index+1);
    return (currAns==true && recAns==true);

    // if(currAns==true && recAns==true) {
    //     return true;
    // }
    // else {
    //     return false;
    // }

}
int main () {
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=10;
    int index=0;
    bool ans=checkSortedArray(arr,size,index);
    if(ans==1){
    cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";

    }
    cout<<endl;

}