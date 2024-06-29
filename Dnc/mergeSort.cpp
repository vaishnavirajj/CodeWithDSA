#include<iostream>
using namespace std;
void merge(int arr[],int s,int e,int mid) {
    int leftLength=mid-s+1;
    int rightLength=e-mid;

    //creating left array
    int *leftArr=new int[leftLength];

    //creating right array
    int *rightArr=new int[rightLength];
    
    //filling values in left and right array
    //copying values from original array
    //original array index

    int index=s;
    //copying into left array

    for (int i=0;i<leftLength;i++) {
        leftArr[i]=arr[index];
        index++;
    }

    //copying into rightArray
    for (int i=0;i<rightLength;i++) {
        rightArr[i]=arr[index];
        index++;
    }

    //merge logic
    int leftIndex=0;
    int rightIndex=0;
    int originalArrIndex=s;
    while(leftIndex<leftLength && rightIndex<rightLength) {
        if (leftArr[leftIndex] < rightArr[rightIndex]) {
            arr[originalArrIndex] = leftArr[leftIndex];
            leftIndex++;
            originalArrIndex++;
        }

        else {
            arr[originalArrIndex]=rightArr[rightIndex];
            rightIndex++;
            originalArrIndex++;
        }

    }

    //if elements still left in leftArr array

    while(leftIndex < leftLength) {
        arr[originalArrIndex] =leftArr[leftIndex];
        leftIndex++;
        originalArrIndex++;
    }

    //if elements still left in rightArr array
    while(rightIndex < rightLength) {
        arr[originalArrIndex] =rightArr[rightIndex];
        rightIndex++;
        originalArrIndex++;
    }

    //delete heap memory for optimize code
    delete[] leftArr;
    delete[] rightArr;


}

void mergeSort(int arr[],int s,int e) {
    //base case 
    if(s>=e) {
        return;
    }
    int mid=(s+e)/2;
    //left part recursion se solve
    mergeSort(arr,s,mid);
    //right part recursion se solve
    mergeSort(arr,mid+1,e);
    //merging both left and right part
    merge(arr,s,e,mid);
}


int main() {
    int arr[]={10,80,110,90,50,30,40,20};
    int size=8;
    int s=0;
    int e=size-1;
    mergeSort(arr,s,e);

    cout<<"printing sorted array"<<endl;
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}