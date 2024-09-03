//Input-My@name@is@Vaishnavi@Raj
//Simply replace @ with ' '
//Output-My name is Vaishnavi Raj

#include<iostream>
using namespace std;
void replaceCharacter(char arr[],int size) {
    for (int i=0;i<size;i++) {
        if(arr[i]=='@') {
            arr[i]=' ';


        }
    }


}
int main () {
    int size=100;
    char arr[size];
    cin>>arr;
    replaceCharacter(arr,size);
    cout<<arr<<endl;


}

//Time complexity-O(n)
//Space complexity-O(1)