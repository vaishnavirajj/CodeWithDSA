#include<iostream>
using namespace std;
int getLength (char arr[] , int size) {
    int index = 0;
    int count = 0;
    while (arr[index] != '\0') {
        count++;
        index++;
    }
    return count;

}
 void convertToLower(char arr[] , int size ) {
    int len =getLength(arr , size);
    for (int i=0 ; i<=len ; i++) {
      char ch = arr[i];
    //if letter is uppercase then only convert it
    if(ch >='A' && ch <='Z') {
        ch = ch - 'A' + 'a';
       
    }
    arr[i] = ch;

    

    }
  
    


}
int main () {
    int size = 100;
    char arr[100];
    cin>>arr;
    convertToLower(arr , size);
    cout<<arr<<endl;
   
}