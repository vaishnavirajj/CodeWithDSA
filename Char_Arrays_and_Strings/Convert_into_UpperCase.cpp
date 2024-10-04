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
void convertInToUpperCase(char arr[] , int size) {
    int n=getLength(arr,size);
    for (int i=0;i<n;i++) {
        char ch=arr[i];
        //if letter is lowercase then only convert it
        if (ch >= 'a' && ch <='z'){
            ch=ch-'a'+'A';

        }
        
        arr[i]=ch;
    }
   



    }


int main () {
    int size=1000;
    char arr[size];
    cin>>arr;
    convertInToUpperCase(arr,size);
    cout<<arr<<endl;

}