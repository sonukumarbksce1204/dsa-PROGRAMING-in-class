#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* create(){
    int x;
    Node* newnode;

    cout<<"Enter data(-1 for no node): ";
    cin>>x;

    if(x==-1){
        return 0;
    }
    newnode=new Node;
    if(newnode==0){
        cout<<"Memory allocation failed."<<endl;
        exit(1);
    }
    newnode->data=x;
    cout<<"Enter the left child of "<<x<<": ";
    newnode->left=create();
    cout<<"Enter the right child of "<<x<<": ";
    newnode->right=create();

    return newnode;

}

int main(){
    Node* root=0;
    root=create();
    if(root!=0){
        cout<<"Binary tree created successfully."<<endl;
    }
    else{
        cout<<"Binary tree created failed."<<endl;
    }
    return 0;
}