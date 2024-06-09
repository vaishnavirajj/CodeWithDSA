#include<iostream>
using namespace std;
void rowWiseSum(int arr[3][4], int rows,int cols) {
    for (int i=0;i<rows;i++) {
        int sum=0;
        for (int j=0;j<cols;j++) {
            sum=sum+arr[i][j];

        }
        cout<<"Sum of row "<<i<<" is "<<sum<<endl;
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
    rowWiseSum(arr,rows,cols);

}