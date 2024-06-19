//Printing 1 to n

#include<iostream>
using namespace std;
void printCount (int n) {
    //Base Condition
    if (n==0) {
        return;
    }
    //recursive call
    printCount(n-1);
    //processing
    cout<<n<<" ";

}
int main () {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printCount(n);

}
