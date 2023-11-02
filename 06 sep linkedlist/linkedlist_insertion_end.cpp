#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *temp;
struct node *newnode;

void create(){
    char ch='y';
    while(ch=='y'){
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        cin>>ch;
    }
}

void insert(int data){
    struct node *newNode;
    newNode=new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

void insertend(int data){
    struct node *newNode;
    newNode=new node();
    newNode->data=data;
    newNode->next=NULL;
    struct node *ptr=head;
    while(ptr!=NULL){
        ptr=ptr->next;
    }
    newnode->next=newNode;
    
}

int main(){
    create();
    insert(110);
    insertend(123);
    display();
}