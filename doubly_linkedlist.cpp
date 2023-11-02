#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head=NULL;
struct node *newnode;
struct node *temp;
struct node *tail=NULL;

void create(){
    char ch='y';
    while(ch=='y'){
        newnode=new node();
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
            tail=newnode;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
            tail=newnode;
        }
        cout<<"y/n";
        cin>>ch;
    }
}

void insertbeg(int val){
     struct node *newNode;
     newNode=new node();
     newNode->data=val;
     newNode->next=head;
     head->prev=newNode;
     head=newNode;
     newNode->prev=NULL;
}

void insertend(int val){
    struct node *newNode;
    newNode=new node();
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;
}

void insertpos(int val,int pos){
    struct node *ptr=head;
    struct node *newNode;
    newNode=new node();
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    int i=0;
    while(ptr!=NULL){
        if(i+1==pos){
            newNode->next=ptr->next;
            newNode->prev=ptr;
            ptr->next=newNode;
            ptr=ptr->next->next;
            ptr->prev=newNode;
            break;
        }
        ptr=ptr->next;
        i++;
    }
}

void delbeg(){
    struct node *ptr=head;
    head=ptr->next;
    ptr=ptr->next;
    ptr->prev=NULL;
}

void delend(){
    struct node *ptr=tail;
    tail=ptr->prev;
    ptr=ptr->prev;
    ptr->next=NULL;
}

void delend(int pos){
    struct node *ptr=head;
    int i=0;
    while(ptr!=NULL){
        if(i+1==pos){
            ptr->next=ptr->next->next;
            ptr=ptr->next;
            ptr->prev=ptr->prev->prev;
            break;
            
        }
        i++;
        ptr=ptr->next;
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

void disrev(){
    struct node *ptr=tail;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
    }
    cout<<endl;
}

int main(){
    create();
    display();
    disrev();
    cout<<"Inserted at beg"<<endl;
    insertbeg(75);
    display();
    cout<<"Inserted at end"<<endl;
    insertend(11);
    display();
    cout<<"Inserted at pos"<<endl;
    insertpos(111,1);
    display();
    disrev();
    cout<<"Deleted at beg"<<endl;
    delbeg();
    display();
    disrev();
    cout<<"Deleted at end"<<endl;
    delend();
    display();
    disrev();
    cout<<"Deleted at pos"<<endl;
    delend(1);
    display();
    disrev();
}