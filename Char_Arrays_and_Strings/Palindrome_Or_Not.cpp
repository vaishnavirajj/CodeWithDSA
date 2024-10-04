#include<iostream>
using namespace std;
int getLength ( char arr[] , int n) {
    int i=0;
    int count = 0;
    while (arr[i] != '\0') {
        count++;
        i++;
    }
    return count;

}

bool checkPalindromeOrNot (char arr[] , int size ) {
    int len = getLength(arr , 100);
    int i = 0;
    int j = len - 1;
    while (i<=j) {
        if (arr[i] == arr[j]) {
            i++;
            j--;
        }
        else  {
            return false;
        }
    }
    return true;
    
}

   
int main () {
    int n=100;
    char arr[100];
    cin>>arr;
    cout<<"Palindrome or not: "<<checkPalindromeOrNot(arr , 100);

}