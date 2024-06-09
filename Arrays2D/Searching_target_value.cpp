//Searching the target value

#include<iostream>
using namespace std;
int main() {
    int rows=3;
    int cols=3;
    int target=70;
    bool flag=0;
int arr[3][3]={{10,20,30},
            {40,50,60},
           {0,80,90}

};

for(int i=0;i<rows;i++) {
    for (int j=0;j<cols;j++) {
        if(arr[i][j]==target){
            flag=1;
            break;
        }
    }
    

}
if (flag==1){
    cout<<"present";
}
else {
    cout<<"absent";
}

}