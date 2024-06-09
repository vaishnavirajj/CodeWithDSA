#include<iostream>
#include<limits.h>
using namespace std;
int maxElementInArray(int arr[3][4],int rows,int cols) {
    int maxAns=INT_MIN;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            if (arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
            
        }
    }
    return maxAns;

}
int main () {
    int rows=3;
    int cols=4;
    int arr[3][4]={
        {23,44,54,32},
        {54,34,76,41},
        {90,78,62,120}
    };

    int max=maxElementInArray(arr,rows,cols);
    cout<<"Maximum element in an array: "<<max;

    

}