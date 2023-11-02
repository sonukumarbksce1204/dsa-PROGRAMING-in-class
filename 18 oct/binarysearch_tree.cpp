#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int x){
    Node* newnode=new Node;
    newnode->data=x;
    newnode->left=0;
    newnode->right=0;
    return newnode;
}

Node* insert(Node* root,int x){
    if(root==0){
        return createNode(x);
    }
    if(x<root->data){
        root->left=insert(root->left,x);
    }
    else if(x>root->data){
        root->right=insert(root->right,x);
    }
    return root;
}

void inorderTraversal(Node* root){
    if(root==0){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int main(){
    Node* root=0;

    //insert nodes into the BST
    root=insert(root,4);
    root=insert(root,2);
    root=insert(root,6);
    root=insert(root,1);
    root=insert(root,3);
    root=insert(root,5);
    root=insert(root,7);
    cout<<"Binary Search tree created successfully."<<endl;
    cout<<"Inorder Triversal of binary search tree:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    return 0;
}