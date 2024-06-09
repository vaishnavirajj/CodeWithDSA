#include<iostream>
using namespace std;
void colWiseSum(int arr[][4],int rows,int cols) {
    for(int j=0;j<cols;j++) {
        int sum=0;
        for (int i=0; i<rows; i++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of col "<<j<<" is "<<sum<<endl;
    }

}



int main() {
    int rows=3;
    int cols=4;
    int arr[3][4] = {
        {10,20,5,7},
        {2,4,6,8},
        {10,15,15,10}
    };
    colWiseSum(arr,rows,cols);

}