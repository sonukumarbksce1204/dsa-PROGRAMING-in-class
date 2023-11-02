#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *newnode;
struct node *head=NULL;
struct node *temp;

void push(){
    newnode=new node();
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
        
    }
}

void pop(){
    struct node *ptr=head;
    if(head==NULL){
        cout<<"Stack underflow."<<endl;
    }
    else{
        head=ptr->next;
    }
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

int main(){
    cout<<"1.PUSH\n2.POP\n3.Display\n4.Exit"<<endl;
    int ch;
    while(1){
        cin>>ch;
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                cout<<"Wrong choice."<<endl;
                break;
        }
    }
}