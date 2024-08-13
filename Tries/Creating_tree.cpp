#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        this->data=val;
        left=NULL;
        right=NULL;
    }
};
Node* createTree(){
    cout<<"Enter the value for Node"<<endl;
    int value;
    cin>>value;
    if(value == -1) {
        return NULL;
    }

    else {
        //valid value
        Node* root=new Node(value);
        //1 case maine karliya baki left and right recursion dekhega
        cout<<"adding left child for"<<value<<endl;
        root->left=createTree();
        cout<<"adding right child for"<<value<<endl;
        root->right=createTree();
        return root;
    }

}
int main () {
    Node* root;
    root=createTree();
    cout<<"printing root"<<root<<endl;
    return 0;
}
