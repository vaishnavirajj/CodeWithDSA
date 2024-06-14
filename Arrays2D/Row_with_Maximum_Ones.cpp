#include<iostream>
#include<limits.h>
using namespace std;
int main() {
    int rows=5;
    int cols=4;
    int countOne=INT_MIN;
    int rowNo= -1;
    int arr[5][4] = {
        {1,0,0,0 },
        {0,1,1,0},
        {0,1,1,0},
        {1,1,1,0 },
        {0,0,1,0}
    };
   
    for (int i=0;i<rows;i++) {
         int count=0;
        for (int j=0;j<cols;j++) {
            if(arr[i][j]==1){
                count++;
                
            }
}
if(count>countOne) {
    countOne=count;
    rowNo=i;
} 
} 

cout<<"row no and maximum number of ones: "<<rowNo<<","<<countOne<<endl;



}
