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
Node* deleteNode(Node* root,int item){
    if(root==NULL){
        return root;
    }
    if(item<root->data){
        root->left=deleteNode(root->left,item);
        return root;
    }
    else if(item>root->data){
        root->right=deleteNode(root->right,item);
        return root;
    }

    //delete on child
    if(root->left==NULL){
        Node* temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL){
        Node* temp=root->left;
        delete root;
        return temp;
    }
    else{
        Node* succParent=root;
        Node* succ=root->right;
        while(succ->left!=NULL){
            succParent=succ;
            succ=succ->left;
        }
        if(succParent!=root){
            succParent->left=succ->right;
        }
        else{
            succParent->right=succ->right;
        }
        //copy succssor data to root
        root->data=succ->data;
        //delete successor and return root
        delete succ;
        return root;
    }

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
    root=insert(root,8);
    root=insert(root,6);
    root=insert(root,23);
    root=insert(root,3);
    root=insert(root,1);
    root=insert(root,7);
    cout<<"Binary Search tree created successfully."<<endl;
    cout<<"Inorder Triversal of binary search tree:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    int n;
    cout<<"Enter the nummber you want to delete: ";
    cin>>n;
    root=deleteNode(root,n);
    cout<<"Inorder Triversal of binary search tree:"<<endl;
    inorderTraversal(root);
    cout<<endl;
    return 0;
}