//pointers-->itself variable that stores address of another variable

#include<iostream>
using namespace std;
void pointersPractice1(int a,int *ptr) {
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
}


void pointersPractice2(int x, int y,int *ptr1 ,int *ptr2) {
    cout<<x<<endl;
    cout<<&x<<endl;
   // cout<<*x<<endl; //throws error
    cout<<y<<endl;
    cout<<&y<<endl;
   // cout<<*y<<endl;//throws error because y is storing integer value not address
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl;
    cout<<*ptr1<<endl;
    cout<<ptr2<<endl;
    cout<<&ptr2<<endl;
    cout<<*ptr2<<endl;
}


void pointersPractice3(int m ,int *iptr) {
   

    cout<<m<<endl;
    cout<<&m<<endl;
    cout<<iptr<<endl;
    cout<<&iptr<<endl;
    cout<<*iptr<<endl;
    cout<<(iptr=iptr+1)<<endl;
    cout<<(*iptr=*iptr/2)<<endl;
    cout<<*iptr+1<<endl;
    cout<<*iptr+3<<endl;
}
int main () {
    // int a =5;
    // cout<<a<<endl;
    // cout<<&a;
    // int b=a;
    //int c=&b;  //throws an error becoZ we are storing addresss in integer not in pointer

   int a=5;
   int *ptr=&a;

pointersPractice1(a, ptr);

   int x=15;
   int y=12;
   int *ptr1=&x;
   int *ptr2=&y;
   pointersPractice2(x,y,ptr1,ptr2);

  int m=13;
  int *iptr=&a;

pointersPractice3(m,iptr);
      



}
