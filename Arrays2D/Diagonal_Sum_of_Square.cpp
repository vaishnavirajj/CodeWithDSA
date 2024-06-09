#include<iostream>
using namespace std;
int diagonalSumOfSqaure(int arr[][4],int rows,int cols) {
    int sum=0;
    for (int i=0;i<rows;i++){
        sum=sum+arr[i][i];

    }
    return sum;
}
int main () {
    int rows=4;
    int cols=4;
    int arr[4][4]={
        {23,34,21,45},
        {18,27,24,98},
        {25,67,45,32},
        {56,43,20,10}
    };
    int sum=diagonalSumOfSqaure(arr,rows,cols);
    cout<<"Diagonal of the square is: "<<sum<<endl;
}