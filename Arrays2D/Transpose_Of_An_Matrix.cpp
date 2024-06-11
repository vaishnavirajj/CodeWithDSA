//Transpose matrix--->only in Square array

#include<iostream>
#include<utility>
using namespace std;
void transposeOfMatrix(int arr[3][3],int rows,int cols) {
    for(int i=0;i<rows;i++) {
        //doing transpose
        for (int j=i;j<cols;j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
    //print transpose of matrix
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int rows=3;
    int cols=3;
    int arr[3][3]={
        {2,4,6},
        {8,3,5},
        {7,9,1}
    };
    cout<<"printing before transpose"<<endl;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"printing after transpose"<<endl;
    transposeOfMatrix(arr,rows,cols);
}