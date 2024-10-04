#include<iostream>
using namespace std;
int getLength(char arr[],int size) {
    int count=0;
    int index=0;
    
    // while loop
    while(arr[index]!='\0') {
        count++;
        index++;
    }
    return count;
}

void reverseCharArray (char arr[] , int size) {
    int len = getLength(arr , size);
    int i=0;
    int j=len-1;
    while (i<=j) {
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
   
    

}
int main () {
    int size = 100;
    char arr[100];
    cin>>arr;
    reverseCharArray(arr , size);
    cout<<arr<<endl;
    return 0;

}