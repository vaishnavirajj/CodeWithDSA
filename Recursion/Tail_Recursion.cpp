//printing counting from n to 1

#include<iostream>
using namespace std;
void printCount(int n) {
    //Base condition
    if(n==1) {
        cout<<1<<" ";
        return;
    }
    //processing
    cout<<n<<" ";
    //recursive call
    printCount(n-1);

}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printCount(n);

}
