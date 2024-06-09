#include<iostream>
#include<limits.h>
using namespace std;
int minElementInArray(int brr[][3],int rows,int cols) {
    int minAns=INT_MAX;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            if (brr[i][j]<minAns) {
                minAns=brr[i][j];

            }
        }
    }
    return minAns;
}
int main () {
    int rows=4;
    int cols=3;
    int brr[4][3]={
        {34,54,26},
        {77,53,44},
        {23,73,98},
        {35,6,130}
    };
    int min =minElementInArray(brr, rows, cols);
    cout<<"Minimum number in an array is: "<<min<<endl;

}