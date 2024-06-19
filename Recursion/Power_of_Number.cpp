#include<iostream>
#include<cmath>
using namespace std;
int pow(int n) {
    //Base Condition
    if (n==0) {
        return 1;
    }
    //recursive call
    int recAns=pow(n-1);
    //processing
    int finalAns=2*recAns;
    return finalAns;
}
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<pow(n);

}