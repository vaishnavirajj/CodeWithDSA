//Factorial of a number
#include<iostream>
using namespace std;
int getFactorial(int n){
       //Base Condition
        if(n==0 || n==1) {
            return 1;
        }
        //Recursive call
        int recursionAns=getFactorial(n-1);
        //processing
        int finalAns=n*recursionAns;
        return finalAns;
    }
int main() {
    cout<<"Enter the number: ";
    int number;
    cin>>number;
    cout<<getFactorial(number);

    
}
