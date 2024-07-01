#include<iostream>
using namespace std;
void printDigits(int n) {
    //Base case
    if(n==0) {
        return;
    }

    //recursion
    int newNum=n/10;
    printDigits(newNum);

    //1 case 
    int digits=n%10;
    cout<<digits<<" ";

}

int main() {
    int n;
    cout<<"enter n:";
    cin>>n;
    printDigits(n);
}