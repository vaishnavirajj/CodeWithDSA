#include<iostream>
using namespace std;


int main() {
    //Stack memory
    int n =5;
    cout<<n<<endl;

    //Heap memory
    int *a =new int;
    *a=5;
    cout<<*a<<endl;

    //deallocate
    delete a;
  
  //1D array 
  int arr[2][4]={
    {1,2,3,4},
    {5,6,7,8},
   
  }

  //2D array
  int **brr=new int *[4];
  for (int i=0;i<4;i++) {
    //Creating 1d array of each pointer
    brr[i]=new int[3];
  }


  //input
  for(int i=0;i<4;i++) {
    for (int j=0;j<3;j++) {
        cin>>brr[i][j];
    }
  }
   //printing 
   for (int i=0;i<4;i++) {
    for (int j=0;j<3;j++) {
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }

  //Dellocating
  //free one by one
  for (int i=0;i<4;i++) {
    for (int j=0;j<3;j++) {
        delete[] brr[i];

    }
  }
}