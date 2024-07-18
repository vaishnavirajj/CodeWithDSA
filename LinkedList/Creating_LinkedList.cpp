#include<iostream>
using namespace std;
class Node {
    int data;
    Node* next;

    //Constructor
   Node(int value) {
    this->data=value;
    this->next=NULL;
}

};

Node* insertAtHead(int value,Node* &head,Node* &tail) {
    //LL is empty-->Both head and tail point to NULL
    //It means we are creating first Node of LL
    if(head == NULL && tail == NULL) {
    //Step1: Create a new node
    Node* newNode=new Node(value);
    //Step2: head ko node par laga do
    head = newNode;
    //Step3: Tail ko node pr laga do
    tail = newNode;


    }
    



}

int main () {
    //Stack memory
    //Node first;

    //Dynamic memory
    Node* first=new Node(value);

    

}
