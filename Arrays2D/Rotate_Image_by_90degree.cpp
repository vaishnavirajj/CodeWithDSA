#include<iostream>
#include<utility>
using namespace std;
int main () {
    int rows=3;
    int cols=3;
    int arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9 }
    };

    cout<<"Before Roatating"<<endl;
     for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Transpose of matrix

    for (int i=0;i<rows;i++) {
         for (int j=i;j<cols;j++) {
           swap(arr[i][j] ,arr[j][i]);
        }
       
    }
    
    //Reversing each rows
   for (int i=0;i<rows;i++) {
    int start =0;
    int end=cols-1;
    while(start<end) {
        
        swap (arr[i][start],arr[i][end]);
        
        
        start++;
        end--;
    }
   
   }
    
    cout<<"After rotating"<<endl;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    
    }
