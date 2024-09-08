//Creation
// vector<vector<int>arr(no of rows, vector<int>(no of columns , value))
#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<vector<int>>arr(5,vector<int>(4,0));
    //2d array created
   //with 5 rows
   //with 4 columns
  //witll intial value of each cell as "0"
  int totalRows=arr.size();
  int totalCols=arr[0].size();

  //Jagged Vector-->columns size is varring
  vector<vector<int>>brr(5);

  brr[0]=vector<int>brr(4);
  brr[1]=vector<int>brr(2);
  brr[2]=vector<int>brr(3);
  brr[3]=vector<int>brr(5);
  brr[4]=vector<int>brr(1);

TotalRow=brr.size();
//TotalCols=brr[i].size();


}
