#include<iostream>
#include<cmath>
using namespace std;
int fib(int n) {
    //Base condition
    if(n==0 || n==1) {
        return n;
    }
    //recursive call
    int finAns=fib(n-1) + fib(n-2);
    return finAns;
}
int main () {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<fib(num);

}