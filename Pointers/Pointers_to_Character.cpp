#include<iostream>
using namespace std;
int main() {
    char ch[100]="love babbar";
    char *cptr=ch;
    cout<<ch<<endl; //it will print love babbar not base address like in pointer to array 
    cout<<cptr<<endl;
    cout<<&ch<<endl;  //explicitly finding address
    cout<<ch[0]<<endl;
    cout<<&cptr<<endl;
    cout<<*cptr<<endl;
    cout<<*(cptr+3)<<endl;
}