#include<iostream>
using namespace std;
class Stack {
    public:
    int* arr;
    int size;
    int top1;
    int top2;
    
    Stack(int capacity) {
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;


    }

    void push1(int val) {
        //if space available ,then push
        //else stack overflow kr jayega
        if (top2-top1==1) {
            //cannot insert
            cout<<"Stack overflow"<<endl;
        }

        else {
            top1++;
            arr[top1]=val;

        }
    }

    void push2(int val) {
        if (top2-top1==1) {
            cout<<"Stack overflow"<<endl;
        }

        else {
            top2--;
            arr[top2]=val;
        }

    }

    void pop1() {
        //if element present then pop
        //if stack is empty the don't pop
        if (top1==-1) {
            //stack1 is empty
            cout<<"Stack underflow"<<endl;
        }
        else {
            arr[top1]=0;
            top1--;
        }


    }

    void pop2() {
        //if element present then pop
        //stack is empty don't pop
        if (top2 == size) {
            //stack2 is empty
            cout<<"Stack underflow"<<endl;
        }

        else {
            arr[top2]=0;
            top2++;
        }

    }

    void print() {
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        for (int i=0;i<size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main () {
    Stack s(7);
    s.print();
    s.push1(10);
    s.push2(50);
    s.print();
    s.push1(20);
    s.push2(30);
    s.print();
    s.push1(40);
    s.push2(60);
    s.print();
    s.push1(100);
    s.push2(200);
    s.print();
    s.pop1();
    s.pop2();
    s.print();



}