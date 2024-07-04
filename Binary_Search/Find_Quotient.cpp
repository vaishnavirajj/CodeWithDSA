//Given two integers one is a dividend and the other is the divisor.find quotient without using / or % operator
#include<iostream>
using namespace std;
int getQuotient(int divisor,int dividend) {
    int s=0;
    int e=dividend;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e) {
        if(divisor*mid==dividend) {
            return mid;
        }

        if(divisor*mid<dividend) {
            ans=mid; //store
            s=mid+1; //compute
        }

        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main () {
    int divisor;
    int dividend;
    cout<<"enter divisor:";
    cin>>divisor;
    cout<<"enter divided:";
    cin>>dividend;
    int ans=getQuotient(abs(divisor),abs(dividend));
    if((divisor>0 && dividend<0) ||(divisor<0 && dividend>0 )){
        ans=0-ans;

    }
    cout<<"Quotient is: "<<ans<<endl;
}