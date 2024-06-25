#include<iostream>
using namespace std;
int printSum(int n) {
    //base case
    if(n==1) {
        return 1;
    }
    //recurrence relation
    //sum(n)=sum(n-1)+n;
    int recAns=printSum(n-1);
    int finalAns=recAns+n;
    return finalAns;

}
int main() {
    int n;
    cout<<"Enter N:";
    cin>>n;
    cout<<printSum(n);
}