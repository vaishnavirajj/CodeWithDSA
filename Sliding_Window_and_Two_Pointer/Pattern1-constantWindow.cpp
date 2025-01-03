//Max sum of subArray containing 4 elements;
#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int n = 6;
    int arr[n] = {-1 , 2 , 3,4,5,-1};
    int k=4;
    int l =0;
    int r =k-1;
    int sum =0;
    for (int i=0; i<=r;i++) {
        sum+=arr[i];
    }
    int maxSum= sum;

    while (r<n-1) {
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        maxSum = max(maxSum , sum);
    }
    cout<<maxSum;

}
