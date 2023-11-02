#include<iostream>
using namespace std;

struct node{
  int data;
  struct node *next;
};

struct node *head=NULL;
struct node *newnode;
struct node *temp;
int count=0;

void create(){
    int i=0;
    while(i<5){
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
        i++;
    }
}

void insert(int item,int pos){
    struct node *newNode;
    newNode=new node();
    newNode->data=item;
    newNode->next=NULL;
    struct node *ptr=head;
    temp=head;
    for(int i=0;i<pos;i++){
        ptr=ptr->next;
    }
    newNode->next=ptr->next;
    ptr->next=newNode;
}

void display(){
    struct node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        count++;
    }
}


int main(){
    create();
    insert(44,2);
    display();
    //cout<<count;
}